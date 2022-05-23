#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int n;
        cin>>n;
        if(n%2!=0){
            cout<<-1<<endl;
            continue;
        }
        else if(n == 2){
            cout<<-1<<endl;
            continue;
        }
        else{
            if(n%6 == 0){
                cout<<n/6<<' ';
            }
            else if(n%6 == 2){
                cout<<n/6+1<<' ';
            }
            else if (n%6 == 4){
                cout<<n/6+1<<' ';
            }
            cout<<n/4<<endl;
        }
    }
    return 0;
}