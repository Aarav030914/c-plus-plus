#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        if(n==1){
            cout<<"YES"<<endl;
        }
        else{
            if(n%2==0){
                for(int j=0;j<n;j+=2){
                    if(a[j]>a[j+1]){
                        int temp = a[j];
                        a[j] = a[j+1];
                        a[j+1] = temp;
                    }
                }
            }
            else{
                for(int j=1;j<n;j+=2){
                    if(a[j]>a[j+1]){
                        int temp = a[j];
                        a[j] = a[j+1];
                        a[j+1] = temp;
                    }  
                }
            }
            bool is_sorted = true;
            
            for(int j=1;j<n;j++){
                if(a[j]<a[j-1]){
                    cout<<"NO"<<endl;
                    is_sorted = false;
                    break;
                }
            }
        
            if (is_sorted){
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}