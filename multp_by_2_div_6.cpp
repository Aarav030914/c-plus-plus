#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i<t;i++){
        long long int n;
        cin>>n;
        int j = 0;
        while(n>1){
            long long l = n%6;
            if (l == 0){
                n = n/6;
            }
            else{
                n = n*2;
            }
            j++;
        }
        if (n == 1){
            cout<<j<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
}