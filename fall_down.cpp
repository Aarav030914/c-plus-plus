#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int Y,X;
        cin>>Y>>X;
        string arr[Y];
        for(int j=0;j<Y;j++){
            cin>>arr[j];
        }
        for(int x=0;x<X;x++){
            int stones = 0;
            for(int y=0;y<Y;y++){
                if(arr[y][x] == '*'){
                    stones++;
                    arr[y][x] = '.';
                }
                else if(arr[y][x] == 'o'){
                    for(int s=1;s<=stones;s++){
                        arr[y-s][x] = '*';
                    }
                    stones = 0;
                }
            }
            for(int s=0;s<stones;s++){
                arr[Y-s-1][x] = '*';
            }
        }
        for(int j=0;j<Y;j++){
            cout<<arr[j];
            cout<<endl;
        } 
    }
}