#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        int sum = 0;
        int num_of_zero = 0;
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        if(n == 1){
            cout<<0<<endl;
        }
        else{
            for(int k=n-1;k>0;k--){
                
                
                if(arr[k-1]>=arr[k] and arr[k]>0){
                    while(arr[k-1]>=arr[k] and arr[k-1]>0){
                        arr[k-1] = arr[k-1]/2;
                        sum++;
                    }
                    if(arr[k-1] == 0){
                        num_of_zero++;
                    }
                }
                else if(arr[k] == 0){
                    num_of_zero = 2;
                }
            }
            if(num_of_zero>1){
                cout<<-1<<endl;
            }
            else{
                cout<<sum<<endl;
            }
        }
    }
    return 0;
}