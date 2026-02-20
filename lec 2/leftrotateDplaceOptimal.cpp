// Optimal solution
#include<bits/stdc++.h>
using namespace std;

void reverseArr(vector<int>&arr,int l, int r){
    while(l<r){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
}
void leftRotateArray(vector<int>&arr,int d){
    int n = arr.size();
    reverseArr(arr,0,d-1);
    reverseArr(arr,d,n-1);
    reverseArr(arr,0,n-1);

}

int main(){
    int n;
    cin>>n;
    int d;
    cin>>d;
    d = d%n;
    vector<int>arr(n);
    for(int i = 0;i<=n-1; i++) cin>>arr[i];
    leftRotateArray(arr,d);
    for(auto x : arr){
        cout<<x<<" ";
    }

    return 0;
}