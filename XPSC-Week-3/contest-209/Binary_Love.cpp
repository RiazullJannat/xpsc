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
        string s;
        cin >> s;
        int cn01 = 0, cn10 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s.substr(i, 2) == "01")
                cn01++;
            else if (s.substr(i, 2) == "10")
                cn10++;
        }
        if (cn01 > 0 && cn10 > 0)
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }

    return 0;
}