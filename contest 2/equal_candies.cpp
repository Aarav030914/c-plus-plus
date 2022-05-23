#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        long long int arr[n];
        long long int sum  = 0;
        for(int j=0;j<n;j++){
            cin>>arr[j];
            sum += arr[j];
        }
        long long int m = *min_element(arr, arr + n);
        cout<<sum-n*m<<"\n";
        
    }
    return 0;
}