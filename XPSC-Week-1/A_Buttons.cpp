#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int twiceA = a + a - 1;
    int twiceB = b + b - 1;
    int ab = a + b;
    int res = max(max(twiceA, twiceB), ab);
    cout << res << endl;
    return 0;
}