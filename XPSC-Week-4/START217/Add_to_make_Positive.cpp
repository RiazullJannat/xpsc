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
        int sum = 0, n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            sum += val;
        }
        if (sum < 0)
            cout << abs(sum / 2) << "\n";
        else
            cout << 0 << "\n";
    }

    return 0;
}