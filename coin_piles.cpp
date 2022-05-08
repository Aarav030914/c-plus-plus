#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i<n;i++){
        int a;
        int b;
        cin>>a;
        cin>>b;
        int m = min(a,b);
        if ((a+b)%3 == 0){
            int k = (a+b)/3;
            if (m-k>=0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}