#include<bits/stdc++.h>
using namespace std;
void seclarge(int arr[],int n){
    int largest = arr[0];
    int seclarge = INT_MIN;
    for(int i = 0; i<=n-1;i++){
        if(arr[i]>largest){
            seclarge = largest;
            largest = arr[i];
        }
        if(arr[i]<largest && arr[i]>seclarge){
            seclarge = arr[i];
        }
    }
    cout<<"Second Largest: "<<seclarge;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) cin>>arr[i];
    seclarge(arr,n);
    return 0;
}