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
        int n, x, k;
        cin >> n >> x >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<int>());
        for (int i = 0; i < k; i++)
        {
            v[i] = 0;
            x += 100;
        }
        int f = 0;
        for (int val : v)
            if (val > x)
                f++;
        cout << f + 1 << endl;
    }
    return 0;
}