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
        int n, s, x;
        cin >> n >> s >> x;
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        if (sum > s)
            cout << "NO\n";
        else
        {
            (s - sum) % x == 0 ? cout << "YES\n" : cout << "NO\n";
        }
    }

    return 0;
}