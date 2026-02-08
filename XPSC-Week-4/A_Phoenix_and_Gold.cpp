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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        if (sum < x)
        {
            cout << "YES\n";
            for (auto val : v)
                cout << val << " ";
            cout << "\n";
        }
        else if (sum == x)
            cout << "NO\n";
        else
        {
            int sum = 0;
            sort(v.begin(), v.end());
            reverse(v.begin(), v.end());
            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {
                sum += v[i];
                if (sum == x)
                {
                    swap(v[i], v[i + 1]);
                    break;
                }
            }
            for (auto val : v)
                cout << val << " ";
            cout << "\n";
        }
    }

    return 0;
}