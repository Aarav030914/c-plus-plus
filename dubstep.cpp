#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s;
    cin>>s;
    int i = 0;
    bool is_word = false;
    bool is_not_consecutive = true;
    while(i<s.size()){
        if ((s[i] == 'W') && (s[i+1] == 'U') && (s[i+2] == 'B')){
            i += 3;
            if (is_word and is_not_consecutive){
                cout<<" ";
            }
            is_not_consecutive = false;
            
        }
        else{
            cout<<s[i];
            is_word = true;
            i++;
            is_not_consecutive = true;

        }
    }
}

