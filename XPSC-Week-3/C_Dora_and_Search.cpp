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
        vector<int> v(n + 1);
        priority_queue<int> mx_heap;
        priority_queue<int, vector<int>, greater<int>> mn_heap;

        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            mx_heap.push(v[i]);
            mn_heap.push(v[i]);
        }
        bool f = false;
        for (int i = 1, j = n; i < j;)
        {
            int mx = mx_heap.top(), mn = mn_heap.top();
            int l = v[i], r = v[j];
            if ((l != mx && l != mn) && (r != mx && r != mn))
            {
                cout << i << " " << j << endl;
                f = true;
                break;
            }
            else
            {
                if (l == mx)
                {
                    i++;
                    mx_heap.pop();
                }
                else if (l == mn)
                {
                    i++;
                    mn_heap.pop();
                }
                if (r == mx)
                {
                    j--;
                    mx_heap.pop();
                }
                else if (r == mn)
                {
                    j--;
                    mn_heap.pop();
                }
            }
        }
        if (!f)
            cout << -1 << endl;
    }

    return 0;
}