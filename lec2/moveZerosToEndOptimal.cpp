// Optimal solution 

#include<bits/stdc++.h>
using namespace std;
void moveZerotoEnd(int arr[],int n){
    int j = -1;
    for(int i = 0; i<=n-1; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    for(int i = j+1; i<=n-1; i++){
        if(arr[j]==0 && arr[i]!=0){
            swap(arr[j],arr[i]);
            j++;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) cin>>arr[i];
    moveZerotoEnd(arr,n);
    for(int i = 0; i<n; i++) cout<<arr[i]<<" ";
    return 0;
}