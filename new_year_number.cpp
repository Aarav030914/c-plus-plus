#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0;i<t;i++){
        long long int n;
        cin>>n;
        if (n%2020 > n/2020){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}