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
        int cnt0 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 0)
                cnt0++;
        }
        if (cnt0 % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}