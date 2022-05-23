#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n, k;
        cin>>n>>k;
        int arr[n];
        vector<int>vec;
        map<int, int>m;
        bool is_possible = false;
        for(int j=0;j<n;j++){
            cin>>arr[j];
            m[arr[j]]++;
            if(m[arr[j]]==k){
                is_possible = true;
                vec.push_back(arr[j]);
            }
        }
        if(!is_possible){
            cout<<-1<<endl;
        }
        else{
            sort(vec.begin(), vec.end());
            
            int max = 0;
            int l = vec[0];
            int l1 = vec[0];
            int r = vec[0];
            int r1 = vec[0];
            for(int i=1;i<vec.size();i++){
                if(vec[i-1] == vec[i]-1){
                    r1 = vec[i];
                }
                else{
                    l1 = vec[i];
                }
                if(r1-l1>max){
                    max = r1-l1;
                    l = l1;
                    r = r1;
                }
            }
            cout<<l<<' '<<r<<endl;
        }  
    }
    return 0;
}