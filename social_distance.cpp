#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m;
        cin>>n>>m;
        int temp = n;
        int arr[temp];
        for(int j=0;j<temp;j++){
            cin>>arr[j];
        }
        int k=0;
        while(m>=n and n>0){
            if(k==0){
                m = m - 2*arr[k]-1;
            }
            else if(arr[k]>arr[k-1]){
                m = m-1-(2*arr[k]-arr[k-1]);
            }
            else{
                m = m-1-arr[k];
            }
            // cout<<"m->"<<m<<endl;
            n--;
            k++; 
        }

        if(arr[0]!=arr[temp-1]){
            m = m+abs(arr[0]-arr[temp-1]);
            // cout<<"m->"<<m<<endl;
        }
        else if(arr[0]==arr[temp-1]){
            m = m+arr[0];
            // cout<<"m->"<<m<<endl;
        }


        if (m>=0 and n==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}