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
        int x, y;
        cin >> x >> y;
        int Seven = 0, Sodd = 0;

        for (int i = x; i <= y; ++i)
        {
            if (i % x == 0)
            {
                if (i % 2 == 0)
                    Seven += i;
                else
                    Sodd += i;
            }
        }

        if (Seven >= Sodd)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}