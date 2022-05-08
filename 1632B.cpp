#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        unordered_map<int, int>m;
        int first = n-1;
        m[first] = 1;
        for(int j=0;j<n-1;j++){
            cout<<first<<' ';
            for(int k=0;k<n;k++){
                if(k != (~first) and m[k] != 1){
                    first = k;
                    m[first] = 1;
                    break;
                }
            }
        }
        cout<<first<<' '<<endl;
    }
    return 0;
}