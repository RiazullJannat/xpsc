#include <bits/stdc++.h>
using namespace std;
int fashionableArray(vector<int> v)
{
    sort(v.begin(), v.end());
    int mn = v[0];
    int mx = v[v.size() - 1];
    if (mn % 2 == mx % 2)
        return 0;
    int i = 0, cnt = 0;
    while (v[i] % 2 != mx % 2)
    {
        i++;
        cnt++;
    }
    int j = v.size() - 1, cnt2 = 0;
    while (v[j] % 2 != mn % 2)
    {
        j--;
        cnt2++;
    }
    return min(cnt, cnt2);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        cout << fashionableArray(v) << endl;
    }
    return 0;
}