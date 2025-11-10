#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
        map<ll, int> mp;
        int max_freq = 0;

        for (int i = 0; i < n; i++)
        {
            ll val;
            cin >> val;
            mp[val]++;
            max_freq = max(max_freq, mp[val]);
        }

        int ans = max(2 * max_freq - n, n % 2);
        cout << ans << '\n';
    }
    return 0;
}