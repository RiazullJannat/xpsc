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
        if (n < 3)
            cout << "None\n";
        else if (n % 3 == 0)
            cout << "Both\n";
        else
        {
            if (n % 4 == 0)
                cout << "Leapy\n";
            if (n % 5 == 0)
                cout << "Jumpster\n";
        }
    }

    return 0;
}