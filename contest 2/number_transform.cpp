#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x, y;
        cin>>x>>y;
        int a = 0;
        int b = 0;
        if(y%x !=0){
            cout<<0<<' '<<0<<endl;
            continue;
        }
        if(y/x == 1){
            cout<<1<<' '<<1<<endl;
            continue;
        }
        int t = y/x;
        int m = t;
        bool con2 = false;
        for(int j=2;j<11;j++){
            if(con2){
                break;
            }
            while(true){
            if(m == 1){
                cout<<a<<' '<<b<<endl;
                con2 = true;
                break;
            }
            if(m%j != 0){
                break;
            }
            b = j;
            m = m/j;
            a++;
            }
        }
        if(con2){
            ;
        }
        else{
            cout<<0<<' '<<0<<endl;
        }

        
    }
}
    
