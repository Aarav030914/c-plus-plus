#include <iostream>
using namespace std;

int main(){
    int win = 1;
    int n;
    int m;
    cin>>n;
    cin>>m;
    while(n*m>0){
        win = win*(-1);
        n--;
        m--;
    }
    if (win>0){
        cout<<"Malvika";
    }
    else{
        cout<<"Akshat";
    }
}