#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr[a];
    for(int i=0; i<a; i++){
        cin>>arr[i];
    }
    int n=a;
    int lar= INT_MIN;
    int slar= INT_MIN;
    int tlar= INT_MIN;

    for(int i=0;i<n; i++){
        if(arr[i]>lar){
            tlar = slar;
            slar = lar;
            lar = arr[i];
        }
        else if(arr[i]>slar && arr[i] != lar){
            tlar = slar;
            slar = arr[i];
        }
        else if(arr[i]> tlar && arr[i] != slar && arr[i] != lar){
            tlar = arr[i];
        }
    }
    cout<<tlar;

}
