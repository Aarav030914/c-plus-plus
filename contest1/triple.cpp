#include <iostream>
#include <map>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        map<int, int>occr;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int e;
            cin>>e;
            occr[e]++;
        }
        bool flag = true;
        for(auto i:occr){
            if(i.second >= 3){
                cout<<i.first<<endl;
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<-1<<endl;
        }
    }
}