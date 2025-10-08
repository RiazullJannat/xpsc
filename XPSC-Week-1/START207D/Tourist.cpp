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
        int n, a, b;
        cin >> n >> a >> b;
        int mn = INT_MAX;
        while (n--)
        {
            int x, y;
            cin >> x >> y;
            int dis = abs(x - a) + abs(y - b);
            if (dis < mn)
                mn = dis;
        }
        cout << mn << endl;
    }

    return 0;
}