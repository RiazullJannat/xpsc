#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int l = -1,
            r = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                if (l == -1)
                    l = i;
                r = i;
            }
        }
        cout << (r - l) + 1 << endl;
    }

    return 0;
}