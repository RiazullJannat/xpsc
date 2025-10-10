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
    for (int i = 0; i < x; i++)
    {
        bool f = false;
        for (int val : v)
        {
            if (i == val)
            {
                f = true;
                break;
            }
        }
        if (!f)
            cnt++;
    }
    for (int val : v)
        if (val == x)
            cnt++;
    cout << cnt << endl;
    return 0;
}