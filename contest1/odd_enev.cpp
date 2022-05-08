#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, e, o;
        cin >> n;
        int possible = 1;
        for (int j = 0; j < n; j++)
        {
            int element;
            cin >> element;
            if ((j + 1) % 2 == 0)
            {
                if (j == 1)
                {
                    if (element % 2 == 0)
                    {
                        e = 0;
                    }
                    else
                    {
                        e = 1;
                    }
                }
                else if (element % 2 == 0 && e != 0)
                {
                    possible = 0;
                }
                else if (element % 2 != 0 && e != 1)
                {
                    possible = 0;
                }
            }
            else if ((j + 1) % 2 != 0)
            {
                if (j == 0)
                {
                    if (element % 2 == 0)
                    {
                        o = 0;
                    }
                    else
                    {
                        o = 1;
                    }
                }
                else if (element % 2 == 0 && o != 0)
                {
                    possible = 0;
                }
                else if (element % 2 != 0 && o != 1)
                {
                    possible = 0;
                }
            }
        }

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

}