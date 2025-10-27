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
        int n, k, l;
        cin >> n >> k >> l;

        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int mi, li;
            cin >> mi >> li;
            if (li == l)
                v.push_back(mi);
        }

        if (v.size() < k)
        {
            cout << -1 << endl;
        }
        else
        {
            sort(v.begin(), v.end(), greater<int>());

            int ans = 0;
            for (int i = 0; i < k; i++)
                ans += v[i];

            cout << ans << endl;
        }
    }

    return 0;
}