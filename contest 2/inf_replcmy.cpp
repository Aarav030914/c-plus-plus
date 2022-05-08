#include <iostream>
using namespace std;
long long int power(int n){
    long long int prod = 1;
    for(int i=0;i<n;i++){
        prod *= 2;
    }
    return prod;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s,t;
        cin>>s>>t;
        long long int result = 1;
        bool all_a = true;
        int count = 0;
        for(int k=0;k<t.length();k++){
            if(t[k] != 'a'){
                all_a = false;
            }
            else{
                count++;
            }
        }
        if(all_a){
            if(count>1){
                cout<<-1<<endl;
            }
            else{
            cout<<1<<endl;
            }
            continue;
        }
        bool con = true;
        for(int j=0;j<t.length();j++){
            if(t[j] == 'a'){
                result = -1;
                cout<<result<<endl;
                con = false;
                break;
            }
        }
        if(con){
            result += power(s.length())-1;
            cout<<result<<endl;
        }
    }
} 