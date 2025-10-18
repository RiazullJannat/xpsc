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
        int avg = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val > avg)
                avg = val;
        }
        cout << avg << endl;
    }
    return 0;
}