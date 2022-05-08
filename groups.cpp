#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i<t; i++){
        int k;
        cin>>k;
        int arr[k][5];
        //Data collection
        for(int j=0;j<k;j++){
            cin>>arr[j][0]>>arr[j][1]>>arr[j][2]>>arr[j][3]>>arr[j][4];
        }
        //Calculate the number of 1's
        int groups = 0;
        for(int l=0;l<5;l++){
            int sum = 0;
            for (int h=0;h<k;h++){
                if(arr[h][l] == 1){
                    sum ++;
                }
            }
            //replacing it with 0's
            if (sum>=k/2){
                groups++;
                int count = k/2;
                for (int r=0;r<k;r++){
                    if(arr[r][l] == 1 & count>0){
                        count--;
                        for (int g=0;g<5;g++){
                            arr[r][g] = 0;
                        }
                    }
                }
            }
            //Checking if two groups have formed
            if (groups == 2){
                cout<<"YES"<<endl;
                break;
            }
        }
        if(groups<2){
            cout<<"NO"<<endl;
        }
    }
}
