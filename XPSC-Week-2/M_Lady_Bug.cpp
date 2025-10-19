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
        string a, b;
        cin >> a >> b;
        int cnt1 = 0, cnt0 = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == '1' && (b[i - 1] == '0' || b[i + 1] = '0'))
                cnt1++;
            if (b[i] == '0')
                cnt0++;
        }
        if (cnt1 == 0 || cnt1 <= cnt0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}