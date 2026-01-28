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
        int n, x, k;
        cin >> n >> x >> k;
        if (x < k)
        {
            int f = k - x;
            if (x + f <= n)
                cout << min(x, f) << "\n";
            else
                cout << x << "\n";
        }
        else
        {
            int minus = x % k;
            int f = k - (x % k);
            int add = x + f;

            if (add <= n)
                cout << min(minus, f) << "\n";
            else
                cout << minus << "\n";
        }
    }

    return 0;
}