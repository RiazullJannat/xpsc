#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> res(n);
        int current_balloons = 0;
        set<int> in_party;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for (int i = 0; i < n; i++)
        {
            while (!pq.empty() && pq.top().first <= current_balloons)
            {
                int idx = pq.top().second;
                res[idx] = pq.top().first;
                in_party.erase(idx);
                pq.pop();
            }
            if (a[i] <= current_balloons)
            {
                res[i] = a[i];
            }
            else
            {
                res[i] = current_balloons;
                current_balloons++;
            }
        }

        for (int i = 0; i < n; i++)
            cout << res[i] << (i == n - 1 ? "" : " ");
        cout << endl;
    }
    return 0;
}