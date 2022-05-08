#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        bool is_possible = true;
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        if(n<3){
            if(n==1){
                cout<<"YES"<<endl;
                continue;
            }
            else if(n==2){
                if(arr[1]-arr[0]>3){
                    cout<<"NO"<<endl;
                    continue;
                }
                else{
                    cout<<"YES"<<endl;
                    continue;
                }
            }
        }
        int diff = 0;
        for(int j=0;j<n-1;j++){
            diff += arr[j]-arr[j-1];
            if(diff>4){
                is_possible = false;
                break;
            }
        }
        if(!is_possible){
            cout<<"NO"<<endl;
        }
        else{
           cout<<"YES"<<endl; 
        }
    }
    return 0;
}