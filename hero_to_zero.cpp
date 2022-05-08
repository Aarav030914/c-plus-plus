#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i<t;i++){
        long long n, k;
        cin>>n >> k;
        long long j = 0;
        while (n > 0){
            if (n%k == 0){
                n = n/k;
                j += 1;
            }
            else{
                j += n%k;
                n = n - n%k;
            }
   
        }
        cout<<j<<endl;

    }
}