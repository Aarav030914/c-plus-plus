#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    char arr[] = {'H', 'Q', '9'};
    int l = s.size();
    bool is_true = false;
    for (int i = 0; i<l;i++){
        for (int j = 0; j<3; j++){
            if (s[i] == arr[j]){
               is_true = true;
               i = l;
               break;
            }
        }
    }
    if (is_true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}