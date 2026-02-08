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
        string s;
        cin >> s;
        bool f = false;
        int ans = 0;
        for (char c : s)
        {
            if (c == '0')
                f = true;
            if (f && c == '1')
                ans++;
        }
        cout << ans << "\n";
    }

    return 0;
}