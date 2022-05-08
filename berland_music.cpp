#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        //storing the ratings in an array 
        int rating[n];
        for (int j=0;j<n;j++){
            int p;
            cin>>p;
            rating[j] = p;
        }
        string s;
        cin>>s;
        // Using an ordered map to store the indices of all ratings
        // The ratings will get sorted automatically
        // Counting the number of disliked songs
        int l = 0;
        map<int, int>rating_map;
        for (int k=0;k<n;k++){
            if (s[k] == '0'){
                l++;
            }
            rating_map[rating[k]] = k;
        }

        int d = 0;
        for(auto y = rating_map.begin(); y != rating_map.end(); y++){
            int index = y->second;
            if (s[index] == '1'){
                l++;
                rating[index] = l;
            }
            else{
                d++;
                rating[index] = d;
            }
        
        }
        for(int j=0;j<n;j++){
            cout<<rating[j]<<' ';
        }
        cout<<endl;

    }
}