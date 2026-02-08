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
        int x, y, z;
        cin >> x >> y >> z;
        if (y < z)
            cout << y * 2 << "\n";
        else
            cout << z * 2 << "\n";
    }
    return 0;
}