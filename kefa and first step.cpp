#include <iostream>
using namespace std;
#include <string>
#include <vector>
int main(){
    int m;
    cin>>m;
    vector<int> s;
    for (int i = 0; i<m; i++){
        int l;
        cin>>l;
        s.push_back(l);
    }  
    vector<int> vec;
    int max;
    int j = 0;
    int i = 0;
    while(i<s.size()){
        int n = 1;
        while (s[i+1] >= s[i]){
            n++;
            cout<<s[i]<<" "<<s[i+n]<<endl;
        }
        cout<<n<<endl;
        vec.push_back(n);
        if (vec[j] > max){
            max = vec[j];
        }
        cout<< max;
        i = i + n;
        j++;
    }
    
    
}