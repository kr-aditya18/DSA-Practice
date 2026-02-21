#include<bits/stdc++.h>
using namespace std;
int missingNumberBrute(int arr[],int n){
    for(int i = 1; i<=n; i++){
        int flag = 0;
        for(int j = 1; j<=n-1; j++){
            if(arr[j]==i){
                flag = 1;
                break;
            }
        }
        if(flag==0){
            return i;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) cin>>arr[i];
    int missing_number=missingNumberBrute(arr,n);
    cout<<missing_number;
    return 0;

}