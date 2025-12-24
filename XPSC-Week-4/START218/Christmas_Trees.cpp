#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, m, b;
    cin >> n >> a >> m >> b;
    int profit = m * b - a * n;
    cout << profit << "\n";
    return 0;
}