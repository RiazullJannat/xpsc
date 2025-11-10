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
        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        deque<int> dq;
        dq.push_back(p[0]);

        for (int i = 1; i < n; i++)
        {
            if (p[i] < dq.front())
                dq.push_front(p[i]);
            else if (p[i] > dq.front())
                dq.push_back(p[i]);
        }
        for (int v : dq)
            cout << v << " ";
        cout << endl;
    }
    return 0;
}