#include<bits/stdc++.h>
using namespace std;
void leftRotateByDPlaceBrute(int arr[],int n,int d){
    vector<int>temp;
    // d=3 means 3 elements
    // store elements till d in temp
    for(int i = 0; i<d; i++){
        temp.push_back(arr[i]);
    }

    // shifting
    for(int i = d; i<=n-1; i++){
        arr[i-d] = arr[i];
    }

    // put back temp
    for(int i = n-d; i<=n-1; i++){
        arr[n-d+i] = temp[i];
    }
}
void reverse(int arr[],int l,int r){
    while(l<r){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
}
void leftRotatebyDPlaceOptimal(int arr[],int n, int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);

}
int main(){
    int n;
    cin>>n;
    int d;
    cin>>d;
    d = d % n;
    int arr[n];
    for(int i = 0; i<=n-1;i++) cin>>arr[i];
    leftRotateByDPlaceBrute(arr,n,d);
    return 0;
}