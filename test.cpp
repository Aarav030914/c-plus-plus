#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	while(cin>>n){
		int sum = 0;
		int arr[n];
		for(int j=0;j<n;j++){
			cin>>arr[j];
		}
		sort(arr, arr + n);
		for(int j=0;j<n;j++){
			sum += (n-j)*arr[j];
		}
		cout<<sum<<"\n";
   }
}