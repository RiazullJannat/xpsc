#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin >> x;
    if (x >= 200)
        cout << x - 50 << "\n";
    else
        cout << x << "\n";
    return 0;
}