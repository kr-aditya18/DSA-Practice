// Brute solution

#include<bits/stdc++.h>
using namespace std;
void leftRotate(vector<int>&arr,int d){
    int n = arr.size();
    vector<int>temp;
    for(int i = 0; i<d; i++){
        temp.push_back(arr[i]);
    }

    for(int i = d; i<n; i++){
        arr[i-d] = arr[i];
    }
    int j = 0;

    for(int i = n-d; i<n; i++){
        
        arr[i] = temp[j];
        j++;
    }
}

int main(){
    int n;
    cin>>n;
    int d;
    cin>>d;
    d = d%n;
    vector<int>arr(n);
    for(int i = 0; i<=n-1;i++) cin>>arr[i];
    leftRotate(arr,d);
    for(auto x : arr){
        cout<<x<<" ";
    }
    return 0;
}