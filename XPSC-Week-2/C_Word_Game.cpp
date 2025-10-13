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
        vector<set<string>> ds(3);
        map<string, int> mp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string val;
                cin >> val;
                ds[i].insert(val);
                mp[val]++;
            }
        }
        vector<int> res(3, 0);
        for (auto val : mp)
        {
            if (val.second == 2)
            {
                for (int i = 0; i < 3; i++)
                {
                    if (ds[i].count(val.first))
                        res[i]++;
                }
            }
            else if (val.second == 1)
            {
                for (int i = 0; i < 3; i++)
                {
                    if (ds[i].count(val.first))
                        res[i] += 3;
                }
            }
        }
        for (int val : res)
            cout << val << " ";
        cout << endl;
    }
    return 0;
}