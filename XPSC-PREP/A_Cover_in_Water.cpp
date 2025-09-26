#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = false;
        int opt = 0;
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && s[i] == '.' && s[i - 1] == '.' && s[i + 1] == '.')
            {
                flag = true;
                break;
            }
            else if (s[i] == '.')
                opt++;
        }
        flag ? cout << 2 << endl : cout << opt << endl;
    }

    return 0;
}