#include <iostream>
#include <map>
using namespace std;
int main() {
	int s;
	cin >> s;
	int n;
	cin>>n;
	int s1[n];
	int h1[n];
	int p1[n];
	for(int i=0;i<n;i++){
		cin>>s1[i]>>h1[i]>>p1[i];
	}
	map<int, int>m;
	for(int i=0;i<n;i++){
		long long int threat = 0;
		if(s1[i]>=s){
			threat = 100000*s1[i]+1000*p1[i]+n-i;
		}
		else{
			threat = 100000*s1[i]+1000*h1[i]+n-i;
		}
		m[threat] = i+1;
        cout<<endl<<"Ranks->"<<threat<<' '<<i+1<<endl;
	}
    
	map<int, int>r;
	int k=n+1;

	for(auto p:m){
		k--;
        r[p.second] = k;
	}
    int t;
    cin>>t;
    for(int z=0;z<t;z++){
        int u;
        cin>>u;
        cout<<r[u]<<endl;
    }
    	
}