#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
            cin>>arr[i];
    }
    sort(arr, arr+a);
    for(int i=0; i<a; i++){
        cout<<arr[i]<<" "<<endl;
    }
    int op= arr[a-1]* arr[a-2]*arr[a-3];
    int opt = arr[0]* arr[1]* arr[a-1];
    if(op>=opt){
        cout<<op;
    }
    else if(op<opt){
        cout<<opt<<endl;
    }


}
