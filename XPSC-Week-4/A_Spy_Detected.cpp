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
        map<int, pair<int, int>> mp;
        for (int i = 1; i <= n; i++)
        {
            int v;
            cin >> v;
            mp[v].first++;
            mp[v].second = i;
        }
        for (auto v : mp)
            if (v.second.first == 1)
                cout << v.second.second << "\n";
    }
    return 0;
}