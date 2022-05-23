#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        int p = 0;
        for(int j=0;j<n;j++){
            cin>>arr[j];
            for(int k=0;k<j;k++){
                if(arr[j]<=arr[k]){
                    p++;
                }
            }
        }
        cout<<p<<endl;
        
    }
}