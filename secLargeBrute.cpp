#include<bits/stdc++.h>
using namespace std;
void seclarge(int arr[],int n){
    int largest = arr[n-1];
    int seclarge = -1;
    for(int i = n-2; i>=0; i--){
        if(arr[i]!=largest){
            seclarge = arr[i];
            break;
        }
    }
    cout<<"Second Largest : "<<seclarge;
}

void sortt(int arr[],int n){
    for(int i = 0; i<=n-1;i++){
        int mini = i;
        for(int j = i; j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        swap(arr[i],arr[mini]);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) cin>>arr[i];
    sortt(arr,n);
    seclarge(arr,n);
}