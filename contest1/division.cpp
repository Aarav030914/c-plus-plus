#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        if(n<=1399){
            cout<<"Division 4"<<endl;
        }
        else if(1400<=n and n<=1599){
            cout<<"Division 3"<<endl;
        }
        else if(n<=1899 and n>=1600){
            cout<<"Division 2"<<endl;
        }
        else if(n>=1900){
            cout<<"Division 1"<<endl;
        }
    }

}