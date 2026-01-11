#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ms;
    int i = 1;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            int val;
            cin >> val;
            s.insert({i, val});
            ms.insert({val, -i});
            i++;
        }
        else if (n == 2)
        {
            int pos = s.begin()->first, val = s.begin()->second;
            cout << pos << " ";
            s.erase(s.begin());
            ms.erase({val, -pos});
        }
        else
        {
            int pos = -ms.rbegin()->second, val = ms.rbegin()->first;
            cout << pos << " ";
            s.erase({pos, val});
            ms.erase(--ms.end());
        }
    }
    return 0;
}