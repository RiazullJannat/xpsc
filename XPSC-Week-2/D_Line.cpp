#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#define ll long long int

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<ll> gap;
        int mnChange = 0;
        ll total = 0;

        for (int i = 0; i < n; i++)
        {
            ll l = i;
            ll r = n - i - 1;
            if (s[i] == 'L')
                if (r > l)
                {
                    mnChange++;
                    gap.push_back(r - l);
                    total += r;
                }
                else
                {
                    total += l;
                }
            else
            {
                if (l > r)
                {
                    mnChange++;
                    gap.push_back(l - r);
                    total += l;
                }
                else
                    total += r;
            }
        }
        vector<ll> ans(n + 1);

        for (int i = mnChange; i <= n; i++)
        {
            ans[i] = total;
        }

        sort(gap.begin(), gap.end(), greater<ll>());

        for (int i = mnChange - 1; i >= 1; i--)
        {
            total -= gap.back();
            gap.pop_back();
            ans[i] = total;
        }

        for (int i = 1; i <= n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}