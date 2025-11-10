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
        int l = n - 1, r = n, i = 1;
        cout << "2\n";
        while (i < n)
        {
            cout << r << " " << l << endl;
            r = (r + l + 1) / 2;
            l--;
            i++;
        }
    }

    return 0;
}