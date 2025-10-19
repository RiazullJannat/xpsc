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
        string b;
        cin >> b;
        set<char> h(b.begin(), b.end());
        vector<char> r;
        for (char c : h)
            r.push_back(c);
        sort(r.begin(), r.end());
        unordered_map<char, char> mp;
        for (int i = 0; i <= (r.size() - 1) / 2; i++)
        {
            mp[r[i]] = r[r.size() - i - 1];
            mp[r[r.size() - i - 1]] = r[i];
        }
        string s = "";
        for (char c : b)
            s += mp[c];
        cout << s << endl;
    }
    return 0;
}