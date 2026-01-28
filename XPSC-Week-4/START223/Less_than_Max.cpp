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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<bool> can_take(n + 2, false);
        can_take[1] = true;

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int v = a[i];
            if (can_take[v])
            {
                count++;
                can_take[v + 1] = true;
            }
        }
        cout << count << "\n";
    }
    return 0;
}