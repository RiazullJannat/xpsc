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
        int w, p, k;
        cin >> w >> p >> k;
        int res = 0;
        while (k--)
        {
            if (w)
            {
                res += 2;
                w--;
            }
            else
            {
                res += 1;
                p--;
            }
        }
        cout << res << "\n";
    }
    return 0;
}