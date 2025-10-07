#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int cnt = 0;
    if (n == 1 && x == 0 && v[0] == 0)
        cout << 1 << endl;
    else
    {
        for (int i = 0; i <= x; i++)
        {
            bool f = false;
            for (int val : v)
            {
                if (x == val)
                {
                    cnt++;
                    break;
                }
                if (i == val && i != x)
                {
                    f = true;
                    break;
                }
            }
            if (!f)
                cnt++;
        }
        cout << cnt - 1 << endl;
    }
    return 0;
}