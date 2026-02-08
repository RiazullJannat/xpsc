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
        int ans = 0;
        for (char c : s)
        {
            if (c == '1')
                break;
            else
                ans++;
        }
        cout << ans << "\n";
    }

    return 0;
}