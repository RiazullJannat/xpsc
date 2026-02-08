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
        if (n <= 3)
        {
            cout << 0 << endl;
            continue;
        }
        int z = 0;
        for (int i = 2; i < n; i += 2)
        {
            z += ((n - i) - 1);
        }
        cout << z << "\n";
    }
    return 0;
}