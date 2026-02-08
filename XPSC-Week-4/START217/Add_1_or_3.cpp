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
        int n, m;
        cin >> n >> m;
        if (1 * n == m || 3 * n == m)
            cout << "YES\n";
        else if (1 * n > m || m == 2)
            cout << "NO\n";
        else
        {
            for (int i = n - 1; i >= 1; i--)
            {
                if (3 * i < m)
                {
                    3 * i + n - i == m ? cout << "YES\n" : cout << "NO\n";
                    break;
                }
            }
        }
    }

    return 0;
}