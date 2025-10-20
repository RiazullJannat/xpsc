#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> n >> t;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> dp(n + 1, 0);
    set<int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        if (!s.count(v[i]))
        {
            dp[i] = dp[i + 1] + 1;
            s.insert(v[i]);
        }
        else
        {
            dp[i] = dp[i + 1];
        }
    }

    while (t--)
    {
        int p;
        cin >> p;
        cout << dp[p-1] << endl;
    }

    return 0;
}