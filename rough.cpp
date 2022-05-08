#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;
void solve(string* s){
    int len = 0;
    map<char, int>m;
    for(int i=0;i<(*s).length();i++){
        m[(*s)[i]]++; 
    }
    map<int, char>m2;
    for(auto i:m){
        m2[int(i.second)*1000 + 122-i.first] = 'a';
        len++;
    }
    int value = 96+len;
    map<char, char>m3;
    for(auto i:m2){
        m3[char(122-i.first%1000)] = char(value);
        value--;
    }
    for(int i=0;i<(*s).length();i++){
        cout<<m3[(*s)[i]];
    }
}

int main(){
    string s;
    cin>>s;
    solve(&s);
}
