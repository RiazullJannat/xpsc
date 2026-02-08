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
        vector<int> v(n);
        for (int i = 1; i < n + 1; i++)
        {
            int val;
            cin >> val;
            if (val == n)
                v[0] = val;
            else
                v.push_back(val);
        }
        reverse(v.begin() + 1, v.end());
        for (auto val : v)
            cout << val << " ";
        cout << "\n";
    }
    //  while (t--) {
    //     int n;
    //     cin >> n;
    //     vector<int> p(n);
    //     for (int i = 0; i < n; i++) {
    //         cin >> p[i];
    //     }

    //     for (int i = 0; i < n; i++) {
    //         int mx = p[i];
    //         int pos = i;
    //         for (int j = i + 1; j < n; j++) {
    //             if (p[j] >= mx) {
    //                 mx = p[j];
    //                 pos = j;
    //             }
    //         }
    //         if (mx > p[i]) {
    //             reverse(p.begin() + i, p.begin() + pos + 1);
    //             break;
    //         }
    //     }

    //     for (int x : p) cout << x << " ";
    //     cout << "\n";
    // }

    return 0;
}