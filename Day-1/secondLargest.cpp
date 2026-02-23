#include<bits/stdc++.h>
using namespace std;
// Brute -> time complexity = o(n*n)+o(n)
void secLargeBrute(vector<int>&arr,int n){
    sort(arr.begin(),arr.end());
    int largest = arr[n-1];
    int secLarge = -1;
    for(int i = n-2; i>=0;i--){
        if(arr[i]!=largest){
            secLarge = arr[i];
            break;
        }
    }
    cout<<"Second Largest: "<<secLarge;
}
// Better -> T.C => o(2n)
void secLargeBetter(vector<int>& arr, int n){
    int largest = arr[0];
    
    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    int secLarge = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] != largest && arr[i] > secLarge){
            secLarge = arr[i];
        }
    }

    cout << secLarge;
}

// Optimal -> o(n)
void seclargeOptimal(vector<int>&arr,int n){
    int largest = arr[0];
    int seclarge = INT_MIN;
    for(int i = 0; i<=n-1; i++){
        if(arr[i]>largest){
            seclarge = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>seclarge){
            seclarge = arr[i];
        }
    }
    cout<<seclarge;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    secLargeBrute(arr,n);
    return 0;
}