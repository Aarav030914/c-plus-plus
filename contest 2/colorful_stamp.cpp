#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int b=0;
        int r=0;
        int w = 0;
        bool is_possible = true;
        for(int j=0;j<n;j++){
            if(s[j] == 'R'){
                r++;
            }
            else if(s[j] == 'B'){
                b++;
            }
            else{
                w++;
                if((b==0 and r!=0) or (b!=0 and r==0)){
                    is_possible = false;
                    break;      
                }
                else{
                    b = 0;
                    r = 0;
                } 
            }
        }
        if((b==0 and r!=0) or (b!=0 and r==0)){
            is_possible = false;
        }
        if(is_possible){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }  
    }
}