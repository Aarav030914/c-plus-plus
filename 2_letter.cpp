#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        map<string, int>m;
        map<string, int>dup;
        for(int j=0;j<n;j++){
            string s;
            cin>>s;
            dup[s]++;
            m["#"+s.substr(1, 1)]++;
            m[s.substr(0,1)+"#"]++;
        }
        long long int sum = 0;
        for(auto l:m){
            if(l.second > 1){
            sum += l.second*(l.second-1)/2;
            }
        }
        for(auto k:dup){
            if(k.second >1){
            sum -= k.second*(k.second-1);
            }
        }
        cout<<sum<<endl;

    }
}