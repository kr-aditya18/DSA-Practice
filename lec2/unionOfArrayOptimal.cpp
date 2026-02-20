#include<bits/stdc++.h>
using namespace std;
void UnionArrOptimal(int arr1[],int arr2[],int n,int m){
    int i = 0;
    int j = 0;
    vector<int>UnionArr;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            if(UnionArr.size() == 0 || UnionArr.back()!=arr1[i]){
                UnionArr.push_back(arr1[i]);
            }
            i++;
        }
        
        else{
            if(UnionArr.size()==0 || UnionArr.back()!=arr2[j]){
                UnionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i<n){
        if(UnionArr.size()==0 || UnionArr.back()!=arr1[i]){
            UnionArr.push_back(arr1[i]);
        }
        i++;
    }
    while(j<m){
        if(UnionArr.size()==0 || UnionArr.back()!=arr2[j]){
            UnionArr.push_back(arr2[j]);
        }
        j++;
    }

    for(auto x : UnionArr){
        cout<<x<<" ";
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    for(int i = 0; i<n; i++) cin>>arr1[i];
    for(int i = 0; i<m; i++) cin>>arr2[i];
    UnionArrOptimal(arr1,arr2,n,m);
    return 0;
}