#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        vector<int> c(n);
        c[n - 1] = b[n - 1] > a[n - 1] ? b[n - 1] : a[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            c[i] = max(b[i], a[i]);
            c[i] = max(c[i], c[i + 1]);
        }
        vector<int> pref(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            pref[i + 1] = pref[i] + c[i];
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << pref[r] - pref[l - 1] << " ";
        }
        cout << "\n";
    }
    return 0;
}