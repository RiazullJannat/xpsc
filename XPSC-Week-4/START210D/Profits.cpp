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
        int n, x;
        cin >> n >> x;
        if (x > n)
            cout << 0 << "\n";
        else
        {
            int a = (n - x + 1) * x;
            int b = 0;
            for (int i = x; i <= n; i++)
                b += i;
            cout << b - a << endl;
        }
    }
    return 0;
}