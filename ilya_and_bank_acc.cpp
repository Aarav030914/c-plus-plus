#include <iostream>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    if (n>=0){
        cout<<n;
    }
    else{
        n = n*(-1);
        int kl = n%10;
        n = n/10;
        int k2l = n%10;
        n = n/10;
        if (kl>k2l){
            cout<<(-1)*(n*10+k2l);
        }
        else{
            cout<<(-1)*(n*10+kl);
        }
    }
}