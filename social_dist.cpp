#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int n,m;
        cin>>n>>m;
        int arr[n];
        for(int j=0;j<n;j++){
            long long int p;
            cin>>p;
            arr[j] = p;
        }
        sort(arr, arr+n);
        long long int k=0, l=0;
        while(n>0 and m>=l){
            if(k==0){
                l = l + 2*arr[k]+1;
            }
            else{
                l = l+1+(2*arr[k]-arr[k-1]);
            }           
            n--;
            k++; 
        }
        l = l-arr[0];
        if (m>=l and n==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}