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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        set<int> s;
        s.insert(v.back());
        int i;
        for (i = n - 1; i > 0; i--)
        {
            if (s.count(v[i - 1]))
                break;
            else
                s.insert(v[i]);
        }
        cout << i << endl;
    }

    return 0;
}