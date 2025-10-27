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
        float x, y, z;
        cin >> x >> y >> z;
        if (z / (x * y) * 100 > 50)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}