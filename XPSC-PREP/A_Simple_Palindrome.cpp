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
        string v = "aeiou", ans = "";
        int n;
        cin >> n;
        int i = 0;
        while (n--)
        {
            if (i > 4)
                i = 0;
            ans += v[i];
            i++;
        }
        sort(ans.begin(), ans.end());
        cout << ans << "\n";
    }

    return 0;
}