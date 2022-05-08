#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; i++){
        int j;
        cin>>j;
        arr[i] = j;
    }
    sort(arr, arr+n);
    for (int k = 0;k<n;k++){
        cout<<' '<<arr[k];
    }
}