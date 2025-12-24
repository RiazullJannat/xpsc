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
        vector<int> a(n);
        vector<int> c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            pq.push({c[i], i});
        }
        int ans = 0;
        while (!a.empty())
        {
            int sInd = pq.top().second;
            if (sInd <= a.size()-1)
            {
                int sVal = pq.top().first;
                // cout << "ind---> " << sInd << " " << a.size()-1 << "\n";
                // cout << "val---> " << sVal << " " << a[sInd] << "\n";
                ans += sVal * a[sInd];
                a.erase(a.begin() + sInd);
            }
            else
            {
                // cout << sInd << " " << a.size() << endl;
                pq.pop();
            }
        }
        cout << ans << "\n";
    }

    return 0;
}