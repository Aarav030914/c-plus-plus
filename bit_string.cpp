#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long x = 1e9 + 7, y = 1;
    for(int i = 0; i < n; i++){
        y *= 2;
        y = y%x;
    }
    cout << y;
}