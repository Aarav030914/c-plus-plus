#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(){
    string s;
    cin>>s;
    unordered_map<char, int> map;
    int j = 0;
    for (int i = 0;i<s.size(); i++){
        if (map.find(s[i]) == map.end()){
            map[s[i]] = count(s.begin(), s.end(), s[i]);
            if (map[s[i]]%2 != 0){
                j++;
            }
        }
        if (j > 1){
            cout<<"NO";
            break;
        }
         
    }
    
}
