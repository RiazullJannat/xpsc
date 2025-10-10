#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    float ans = 0.0;
    while (n--)
    {
        float a, b;
        cin >> a >> b;
        ans += a * b;
    }
    cout << fixed << setprecision(3) << ans << endl;
    return 0;
}