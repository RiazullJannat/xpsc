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
        map<int, int> mp;
        pair<int, int> ans{0, 0};
        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            mp[v]++;
            if (mp[v] > ans.second)
                ans = {v, mp[v]};
            else if (mp[v] == ans.second && ans.first > v)
                ans = {v, mp[v]};
        }
        cout << ans.first << "\n";
    }

    return 0;
}