#include <iostream>
#include <string>
using namespace std;

int main(){
string s;
getline(cin, s);

int n = 0;
for (int i = 0; i<s.size();i++){
    if (s[i] ==' '){
        n++;
    }
}    
string arr[n+1];
int m = 0;
string out = "";
for (int i = 0; i<s.size();i++){
    if (s[i] ==' '){
        arr[m] = out;
        m++;
        out = "";
    }
    else{
        out+=s[i];
    }  
}
arr[n] = out;
for (int i = 0;i<n+1;i++){
    int max = 0, t;
    for (int j = i; j<n+1;j++){
        if (max<int(arr[j][0])){
            max = int(arr[j][0]);
            t = j;
        }

    }
    string c = arr[i];
    arr[i] = arr[t];
    arr[t] = c;
}
for(int k = 0; k<n+1;k++){
    cout<<arr[k]<<' ';
}

}
