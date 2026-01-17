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
        ll n, ans = 0;
        cin >> n;
        priority_queue<ll> pq;
        while (n--)
        {
            ll val;
            cin >> val;
            if (val > 0)
                pq.push(val);
            else if (!pq.empty())
            {
                ans += pq.top();
                pq.pop();
            }
        }
        cout << ans << "\n";
    }
    return 0;
}