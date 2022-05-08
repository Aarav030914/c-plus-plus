#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>> n;
    vector<int> vec{0};
    long long int sum = 0;
    for (int i=0;i<n;i++){
        long long int j;
        cin>> j;
        
        if (vec[i]>j){
            sum += vec[i]-j;
            j = vec[i];
        }    
        vec.push_back(j);    

    }
    cout<<sum;

}