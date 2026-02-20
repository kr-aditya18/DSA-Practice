#include<bits/stdc++.h>
using namespace std;
void leftRotate(vector<int>&arr){
    int n = arr.size();
    int temp = arr[0];
    for(int i = 1; i<n; i++){
        arr[i-1] =  arr[i];
    }
    arr[n-1] = temp;

}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    leftRotate(arr);
    for(auto x : arr){
        cout<< x<<" ";
    }
    return 0;
}
