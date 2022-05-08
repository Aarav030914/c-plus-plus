#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int n, sum = 0;
        cin >> n;
        map<char, int> f;
        map<char, int> l;
        for (int j = 0; j < n; j++)
        {
            string s;
            cin >> s;
            f[s[0]]++;
            if (s[0] == s[1]){
                l[s[1]]--;
            }
        }
        for (auto p : f)
        {
            if (p.second > 1)
            {
                sum += (p.second) * (p.second - 1) / 2;
            }
        }
        for (auto k : l)
        {
            if (k.second > 1)
            {
                sum += (k.second) * (k.second - 1) / 2;
            }
        }
        cout << sum << endl;
    }
}