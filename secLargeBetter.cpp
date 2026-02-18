#include<bits/stdc++.h>
using namespace std;
void secondLarge(int arr[], int n){
    int largest = arr[0];
    int secLarge = INT_MIN;
    for(int i = 1; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }

    for(int i = 0; i<=n-1; i++){
        if(arr[i]>secLarge && arr[i]!=largest){
            secLarge = arr[i];
        }
    }

    cout<<"Largest Element: "<<largest<<endl;
        if(secLarge == INT_MIN)
        cout << "No second largest element";
    else
        cout << "Second Largest Element: " << secLarge;

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) cin>>arr[i];
    secondLarge(arr,n);
    return 0;
}