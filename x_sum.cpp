#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n, m;
        cin>>n>>m;
        int arr[n][m];
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                cin>>arr[j][k];
            }
        }
        int max = 0;
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                int j1 = j;
                int k1 = k;
                int count = 0;
                while(k1<=m and j1<=n){
                    count++;
                }
            }
        }
    }
}