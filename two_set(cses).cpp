#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    if (n*(n+1)%4 == 0){
        cout<<"YES"<<endl;
        long long int a = n*(n+1)/4;
        vector<int> set1;
        vector<int> set2;
        for (int i = n;i>0;i--){
            if (i <= a){
                a -= i;
                set2.push_back(i);
            }
            else{
                set1.push_back(i);
            }
        }
        cout<<set1.size()<<endl;
        for (int j = 0; j<set1.size(); j++){
            cout<< set1[j]<<" ";
            
        }
        cout<< endl;
        cout<<set2.size()<<endl;
        for (int j = 0; j<set2.size(); j++){
            cout<< set2[j]<<" ";
        }
    }
    else{
        cout<<"NO";
    }
}