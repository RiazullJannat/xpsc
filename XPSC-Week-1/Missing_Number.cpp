#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin >> n;
    long long int s = 0;
    for (long long int i = 0; i < n - 1; i++)
    {
        long long int val;
        cin >> val;
        s += val;
    }
    cout << n * (n + 1) / 2 - s << endl;
    return 0;
}