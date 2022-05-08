#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        int k = (int(s[0])-97)*26+(int(s[1])-97);
        for(int j = 0;j<int(s[0])-97;j++){
            k--;
        }
        if(int(s[1])<int(s[0])){
            k++;
        }
        cout<<k<<endl;
    }
}