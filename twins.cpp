#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum = 0;
    int arr[n];
    for (int i = 0;i<n;i++){
        int p;
        cin>>p;
        arr[i] = p;
        sum += p;
    }
    sort(arr, arr+n);
    int sum1 = 0;
    vector<int>vec;
    int i = n-1;
    while(sum1 <= sum/2){
        vec.push_back(arr[i]);
        sum1+=arr[i];
        i--;
    }
    cout<<vec.size();
}