#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    deque<pair<int, pair<bool, int>>> v;
    map<int, deque<pair<int, bool>>> mp;
    priority_queue<int> as;
    int i = 1;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            int val;
            cin >> val;
            v.push_back({val, {false, i}});
            mp[val].push_back({i, false});
            as.push(val);
            i++;
        }
        else if (n == 2)
        {
            if (v[0].second.first == false)
            {
                cout << i + 1 << " ";
                v.pop_front();
                break;
            }
        }
        else if (n == 3)
        {
            int val = as.top();
            auto r = mp[val][0];
            cout << r.first << " ";
            mp[val].pop_front();
        }
    }
    return 0;
}