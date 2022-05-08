#include <iostream>
using namespace std;

int main(){
    long long int n, k, odds;
    cin>>n;
    cin>>k;
    if (n%2 == 0){
        odds = n/2;
    }
    else{
        odds = n/2+1;
    }
    if (k<=odds){
        cout<<2*k-1;
    }
    else{
        cout<<2*(k-odds);
    }
}