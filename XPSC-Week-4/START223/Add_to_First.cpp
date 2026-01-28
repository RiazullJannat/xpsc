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
        vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        long long current_max = -1;
        bool possible = true;

        for (int i = 0; i < n; i++)
        {
            if (b[i] < a[i])
            {
                possible = false;
                break;
            }

            if (b[i] > a[i])
            {
                if (current_max >= a[i])
                {
                    possible = false;
                    break;
                }
            }

            current_max = max(current_max, a[i]);
        }

        if (possible)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}