#include<bits/stdc++.h>
using namespace std;
void moveZerosBrute(int arr[],int n){
    vector<int>temp;
    for(int i = 0; i<=n-1;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    int nz = temp.size();
    for(int i = 0; i<nz; i++){
        arr[i] = temp[i];
    }

    for(int i = nz; i<=n-1;i++){
        arr[i]= 0;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) cin>>arr[i];
    moveZerosBrute(arr,n);
    for(int i = 0; i<n; i++) cout<<arr[i];
    return 0;
}