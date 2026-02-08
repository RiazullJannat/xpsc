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
        int mx = INT_MIN, ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int d, t;
            cin >> d >> t;
            int avj = d / t;
            if (avj > mx)
            {
                mx = avj;
                ans = i;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}