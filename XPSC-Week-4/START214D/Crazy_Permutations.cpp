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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        string f = "Yes\n";
        for (int i = 0; i < (n - 1); i++)
        {
            if (a[i] < b[i] && a[i + 1] <= b[i])
            {
                f = "No\n";
                break;
            }
            else if (a[i] > b[i] && a[i + 1] >= b[i])
            {
                f = "No\n";
                break;
            }
            else
                a[i] = b[i];
        }
        cout << f;
    }

    return 0;
}