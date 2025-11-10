#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<string> v(n);
        map<char, ll> last_char;
        map<char, ll> first_char;
        map<string, ll> same;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            string val = v[i];
            char a = val[0], b = val[1];
            same[val]++;
            first_char[a]++;
            last_char[b]++;
        }
        ll ans = 0;
        for (auto val : v)
        {
            char a = val[0], b = val[1];
            ans += max((ll)0, first_char[a] - same[val]);
            ans += max((ll)0, last_char[b] - same[val]);
            if (first_char[a] > 0)
                first_char[a]--;
            if (last_char[b] > 0)
                last_char[b]--;
            if (same[val] > 0)
                same[val]--;
        }
        cout << ans << "\n";
    }
    return 0;
}