#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int f_sum = 0, l_sum = 0;
        for(int i1=0;i1<3;i1++){
            f_sum += n%10;
            n = n/10;
        }
        for(int i1=0;i1<3;i1++){
            l_sum += n%10;
            n = n/10;
        }
        if(f_sum == l_sum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<"\n";
        }

    }
    return 0;
}