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
        string s, t;
        cin >> s >> t;
        map<char, int> ss;
        for (char c : s)
            ss[c]++;

        string f = "YES\n";

        for (char c : t)
        {
            if (!ss[c] > 0)
            {
                f = "NO\n";
                break;
            }
            else
            {
                ss[c]--;
            }
        }

        cout << f;
    }

    return 0;
}