#include<bits/stdc++.h>
using namespace std;

void ls(int arr[], int n, int target){
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            cout << "Found at index: " << i;
            return;
        }
    }
    cout << "Not Found";
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int target;
    cin >> target;

    ls(arr, n, target);

    return 0;
}