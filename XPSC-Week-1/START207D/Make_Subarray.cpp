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
        int lInd = INT_MAX, rInd = INT_MIN, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (lInd == INT_MAX)
                    lInd = i;
                rInd = i;
            }
        }
        if (lInd != INT_MAX)
        {
            for (int i = lInd; i < rInd; i++)
                if (s[i] == '0')
                    ans++;
        }
        cout << ans << endl;
    }

    return 0;
}