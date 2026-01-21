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
        int n, ans = 0;
        cin >> n;
        vector<int> v(n+1);
        for (int i = 1; i <= n; i++)
            cin >> v[i];

        for (int i = n; i >= 1; i--)
            if (v[i] != i)
            {
                ans = v[i];
                break;
            }
        cout << ans << "\n";
    }

    return 0;
}