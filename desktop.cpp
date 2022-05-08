#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,q;
    int icon = 0;
    unordered_map<int, int>p;
    cin>>n>>m>>q;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        for(int j=0;j<m;j++){
            if(arr[i][j]== '*'){
                icon++;
                p[j]++;
            }
        }
    }
    for(int i=0;i<q;i++){
        int x,y;
        cin>>x>>y;
        if(arr[x-1][y-1] == '.'){
            icon++;
            arr[x-1][y-1] = '*';
            p[y-1]++;
        }
        else{
            icon--;
            arr[x-1][y-1] = '.';
            p[y-1]--;
        }
        int no_of_moves = icon;
        int col = icon/n;
        for(int c=0;c<col;c++){
            no_of_moves-= p[c];
        }
        for(int t=0;t<icon%n;t++){
            if(arr[t][col] == '*'){
                no_of_moves--;
            }
        }
        cout<<no_of_moves<<"\n";
    }
    

}