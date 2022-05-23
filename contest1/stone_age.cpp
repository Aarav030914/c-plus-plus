#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n, q;
    cin>>n>>q;
    long long int arr[n];
    long long int sum = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    for(int j=0;j<q;j++){
        int t;
        cin>>t;
        if(t == 1){
            long long int i, x;
            cin>>i>>x;
            sum -= arr[i-1];
            sum += x;
            arr[i-1] = x;
            cout<<sum<<"\n";
        }
        else{
            int x;
            cin>>x;
            if(n%2 == 0){
                for(int k=0;k<=n;k+=2){
                    arr[k] = x;
                    arr[k+1] = x;
                }
            }
            else{
                for(int k=0;k<n;k+=2){
                    arr[k] = x;
                    arr[k+1] = x;
                }
            }
            
            sum = n*x;
            cout<<sum<<"\n";
        }
    }
    
    return 0;
}