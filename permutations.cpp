#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    int res = 1;
    for (int i = 1;i<=n;i++){
        res = res*i;
    }
    return res;
}

void permute(string a, int l, int r){
    if (l == r){
        cout<<a<<endl;
    }
    else{
        for (int i = l; i <= r; i++){
            swap(a[l], a[i]);
            permute(a, l+1, r);
            swap(a[l], a[i]);
        }
    }
}
int main(){
    string s;
    cin>>s;
    int n = s.size();
    
    unordered_map<char, int> map;
    for (int i = 0;i<s.size(); i++){
        if (map.find(s[i]) == map.end()){
            map[s[i]] = count(s.begin(), s.end(), s[i]);
            n = n/factorial(map[s[i]]);
        }
    }
    cout<<n<<endl;
    permute(s, 0, s.size()-1);
}


