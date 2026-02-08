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
        vector<int> v(n), ans(n);
        int even = 0, odd = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (!odd || !even)
        {
            for (int val : v)
                cout << val << " ";
            cout << endl;
        }
        else
        {
            sort(v.begin(), v.end());
            for (int val : v)
                cout << val << " ";
            cout << endl;
        }
    }

    return 0;
}