#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long int x;
    cin >> x;
    vector <long long int> vec{x}; 
    while (x != 1){
        if (x%2 == 0){
            x = x/2;
            vec.push_back(x);
        }
        else{
            x = x*3 + 1;
            vec.push_back(x);
        }
    }
    for (int i; i<vec.size(); i++){
        cout << vec[i] << " ";
    }
}