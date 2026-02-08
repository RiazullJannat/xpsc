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
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        priority_queue<pair<int, char>> pq;
        map<char, int> mp;
        vector<int> ans;
        for (char c : s)
        {
            mp[c]++;
            pq.push({mp[c], c});
        }
        ans.push_back(pq.top().first);
        while (q--)
        {
            char c;
            cin >> c;
            mp[c]++;
            pq.push({mp[c], c});
            ans.push_back(pq.top().first);
        }
        for (int v : ans)
            cout << v << " ";
        cout << "\n";
    }

    return 0;
}