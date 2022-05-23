#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n, m;
        cin>>n>>m;
        int sum1 = 0;
        int sum2 = 0;
        int r = 1;
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                int p;
                cin>>p;
                if(r == 1){
                    sum2+=p;
                }
                else{
                    sum1+=p;
                }
                r *= -1;
            }
        }
        cout<<max(sum1, sum2)<<"\n";   
    }
    return 0;
}