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
        int n;
        cin >> n;
        priority_queue<pair<int, int>> pq;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            pq.push({v[i], i});
        }
        int w = 0, ans = 0;

        for (auto val : v)
        {
            w++;
            if (w == 2 && val != pq.top().first)
            {
                ans += val;
                w = 0;
            }
            else if (val == pq.top().first)
            {
                ans += w * val;
                w = 0;
                pq.pop();
            }
        }
        cout << ans << "\n";
    }

    return 0;
}