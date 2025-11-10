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
        map<int, vector<int>> mp;
        int n, q;
        cin >> n >> q;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mp[val].push_back(i);
        }
        while (q--)
        {
            int a, b;
            cin >> a >> b;
            if (mp.count(a) && mp.count(b) && mp[a][0] <= mp[b].back())
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}