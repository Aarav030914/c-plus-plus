#include <bits/stdc++.h>
using namespace std;
int diff(string a, string b){
    int l = a.length();
    int sum = 0;
    for(int i=0;i<l;i++){
        sum += abs(a[i]-b[i]);
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n, m;
        cin>>n>>m;
        string arr[n];
        int diff_arr[n*(n-1)/2];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int p = 0;
        for(int j=0;j<n;j++){
            for(int k=j+1;k<n;k++){
                diff_arr[p] = diff(arr[j], arr[k]);
                p++;
            }
        }
        int mi = *min_element(diff_arr, diff_arr + n*(n-1)/2);
        cout<<mi<<"\n";
    }
    
    return 0;
}