#include<bits/stdc++.h>
using namespace std;
void largest(int arr[],int n){
    cout<<"Largest Element: "<<arr[n-1];
}

void selectionSort(int arr[],int n ){
    for(int i = 0; i<=n-1; i++){
        int mini = i;
        for(int j = i; j<=n-1; j++){
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
    for(int i = 0; i<=n-1; i++) cin>>arr[i];
    selectionSort(arr,n);
    largest(arr,n);
    return 0;
}
