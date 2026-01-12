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
        int n, m;
        cin >> n >> m;
        string s, c;
        cin >> s;
        set<int> ind;
        for (int i = 0; i < m; i++)
        {
            int val;
            cin >> val;
            ind.insert(val);
        }
        cin >> c;
        sort(c.begin(), c.end());
        while (!ind.empty())
        {
            int i = *(ind.begin());
            ind.erase(i);
            char ch = *(c.begin());
            c.erase(c.begin());
            s[i-1] = ch;
        }
        cout << s << endl;
    }

    return 0;
}