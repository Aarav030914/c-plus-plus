#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    long long int sum1 = 0;
    long long int sum2 = 0;
    for (int i = 1; i<n; i++){
        int l;
        cin>>l;
        sum1 += l;
        sum2 += i;
    }
    cout<< sum2 + n - sum1;
}