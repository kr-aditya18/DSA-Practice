#include<bits/stdc++.h>
using namespace std;
void unionArrBrute(int arr1[],int arr2[],int n,int m){
    set<int>st;
    for(int i =0; i<n; i++){
        st.insert(arr1[i]);
    }
    for(int i =0; i<m; i++){
        st.insert(arr2[i]);
    }
    int stSize = st.size();
    vector<int>UnionArr(stSize);
    int i = 0;
    for(auto it : st){
        UnionArr[i++] = it;
    }
    
    for(auto x : UnionArr){
        cout<<x<<" ";
    }

}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int arr1[n];
    int arr2[m];
    for(int i = 0; i<n; i++) cin>>arr1[i];
    for(int i = 0; i<m; i++) cin>>arr2[i];

    unionArrBrute(arr1,arr2,n,m);

    return 0;


}