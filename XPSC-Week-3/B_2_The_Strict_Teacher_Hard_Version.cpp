#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll m, tp, q;
        cin >> m >> tp >> q;
        vector<int> tPos(tp);
        for (int i = 0; i < tp; i++)
            cin >> tPos[i];
        int dp;
        sort(tPos.begin(), tPos.end());
        while (q--)
        {
            cin >> dp;
            if (dp < tPos[0])
                cout << tPos[0] - 1 << "\n";
            else if (dp > tPos[tp - 1])
                cout << m - tPos[tp - 1] << "\n";
            else
            {
                auto it = lower_bound(tPos.begin(), tPos.end(), dp);
                auto lt = it;
                lt--;
                int left = *lt, right = *it;
                int mid = (left + right) / 2;

                cout << min(abs(left - mid), abs(right - mid)) << "\n";
            }
        }
    }

    return 0;
}