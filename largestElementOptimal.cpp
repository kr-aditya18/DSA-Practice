#include<bits/stdc++.h>
using namespace std;
void largest(int arr[],int n){
    int largest = arr[0];
    for(int i = 0; i<=n-1; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"Largest Element: "<<largest;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<=n-1; i++) cin>>arr[i];
    largest(arr,n);
    return 0;
}