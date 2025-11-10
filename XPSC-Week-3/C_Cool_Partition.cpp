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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        ll ans = 1, ind = 0;
        set<int> s;
        s.insert(v[0]);
        for (ll i = 1; i < n; i++)
        {
            if (s.count(v[i]))
                s.erase(v[i]);
            if (s.empty())
            {
                ans++;
                for (ll j = ind + 1; j <= i; j++)
                    s.insert(v[j]);
                ind = i;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}