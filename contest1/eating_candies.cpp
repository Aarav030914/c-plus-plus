#include <iostream>
#include <map>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n, q;
        cin>>n>>q;
        int arr[n];
        for(int j=0;j<n;j++){
            int k;
            cin>>k;
        }
        for(int j=0;j<q;j++){
            int m = n;
            int r;
            cin>>r;
            int count = 0;
            bool is_possible = true;
            while(r>0){
                if(m==0){
                    cout<<-1<<endl;
                    is_possible = false;
                    break;
                }
                r-=arr[m-1];
                m--;
                count++;
            }
            if(is_possible){
                cout<<count<<endl;
            }
            

        }
    }
    return 0;
}