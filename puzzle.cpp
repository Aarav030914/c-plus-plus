#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        int p;
        cin>>p;
        arr[i] = p;
    }
    sort(arr, arr+m);
    int min = arr[m-1]-arr[0];
    for(int j=0;j<=m-n;j++){
        if (min>arr[j+(n-1)]-arr[j]){
            min = arr[j+(n-1)]-arr[j];

        }
    }
    cout<<min;

    
}