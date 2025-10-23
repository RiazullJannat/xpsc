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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int k;
        cin >> k;
        while (k--)
        {
            string s, flag = "YES\n";
            cin >> s;
            if (v.size() != s.length())
            {
                cout << "NO\n";
                continue;
            }
            map<char, int> mp;
            map<int, char> mp2;

            for (int i = 0; i < n; i++)
            {
                if (mp.count(s[i]))
                {
                    if (mp[s[i]] != v[i])
                    {
                        flag = "NO\n";
                        break;
                    }
                }
                else if (mp2.count(v[i]))
                {
                    if (mp2[v[i]] != s[i])
                    {
                        flag = "NO\n";
                        break;
                    }
                }
                else
                {
                    mp[s[i]] = v[i];
                    mp2[v[i]] = s[i];
                }
            }
            cout << flag;
        }
    }

    return 0;
}