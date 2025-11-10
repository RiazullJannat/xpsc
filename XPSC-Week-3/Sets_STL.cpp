#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    set<ll> s;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x == 1)
            s.insert(y);
        else if (x == 2)
            s.erase(y); 
        else if (x == 3)
        {
            if (s.count(y))
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;
}