#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<int> v;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (t--)
    {
        int q;
        cin >> q;
        if (q == 1)
        {
            int val;
            cin >> val;
            v.push_back(val);
            pq.push(val);
        }
        else
        {
            if (v.empty())
                cout << "empty\n";
            else
            {
                int val = pq.top();
                v.erase(remove(v.begin(), v.end(), val), v.end());
                cout << val << "\n";
                while (!pq.empty())
                {
                    if (pq.top() == val)
                        pq.pop();
                    else
                        break;
                }
            }
        }
    }
    return 0;
}