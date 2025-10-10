#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<long long int> v(n);
    long long int mn = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i > 0 && v[i] < v[i - 1])
        {
            mn += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
    }
    cout << mn << endl;
    return 0;
}