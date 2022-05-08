#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        bool is_possible = true;
        int a, b, c, x, y;
        cin>>a>>b>>c>>x>>y;
        if(a-x<0){
            c += a-x;
        }
        if(b-y<0){
            c+=b-y;
        }
        if(c<0){
            is_possible = false;
        }
        if(is_possible){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}