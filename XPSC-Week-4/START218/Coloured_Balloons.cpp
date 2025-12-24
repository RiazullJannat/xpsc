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
        vector<int> a(n);
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            ans += val * i;
        }
        cout << ans << "\n";
    }
    return 0;
}