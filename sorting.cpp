#include <iostream>
using namespace std;
int main(){
    int arr[]= {5, 4, 1, 3, 2};
    for (int i = 0;i<5;i++){
        int max = 0, t;
        for (int j = i; j<5;j++){
            if (max<arr[j]){
                max = arr[j];
                t = j;
            }

        }
        int c = arr[i];
        arr[i] = max;
        arr[t] = c;
    }
    for(int k = 0; k<5;k++){
        cout<<arr[k];
    }

}