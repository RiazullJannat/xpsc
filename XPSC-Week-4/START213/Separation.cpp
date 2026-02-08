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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        int l = 0, g = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < x)
                l++;
            if (v[i] > x)
                g++;
        }
        if (l != g)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}