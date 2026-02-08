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
        vector<int> v;
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
            pq.push(val);
        }
        int ans = 0;
        while (!v.empty())
        {
            int target = pq.top();
            pq.pop();
            auto it = find(v.begin(), v.end(), target);
            int ind = it - v.begin();
            ans += min(ind, (int)v.size() - ind - 1);

            v.erase(v.begin() + ind);
        }
        cout << ans << "\n";
    }
    return 0;
}