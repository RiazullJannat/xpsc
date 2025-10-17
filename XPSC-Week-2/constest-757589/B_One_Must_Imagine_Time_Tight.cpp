#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int mn = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        int v;
        cin >> v;
        mn = min(mn, v);
    }
    cout << mn << endl;
    return 0;
}