#include <iostream>
using namespace std;
#include <vector>
int main(){
    string s;
    cin >> s;
    vector<int> vec;
    
    int max = 0;
    int j = 0;
    int i = 0;
    while(i<s.size()){
        int n = 0;
        while (s[i+n] == s[i]){
            n++;
        }
        vec.push_back(n);
        if (vec[j] > max){
            max = vec[j];

        }
        i = i + n;
        j++;
    }
    if (max>=7){
        cout<<"YES";
    }
    
    else{
        cout<<"NO";
    }
}