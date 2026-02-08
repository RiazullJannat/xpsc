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
        if (n % 2 == 0)
        {
            if (n == 0)
            {
                cout << 0 << endl;
            }
            else if (n < 6)
                cout << n / 2 << "\n";
            else
            {
                cout << n / 4 + 1 << "\n";
            }
        }
        else
            cout << 0 << "\n";
    }
    return 0;
}