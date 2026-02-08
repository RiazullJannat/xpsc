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
        queue<int> even;
        queue<int> odd;
        vector<int> res(n);
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val % 2 == 0)
                even.push(val);
            else
                odd.push(val);
        }
        if (odd.empty())
            cout << 0 << "\n";
        else
        {
            res.push_back(odd.front());
            odd.pop();
            while (!even.empty() || !odd.empty())
            {
                if (res.back() % 2 == 0 && !odd.empty())
                {
                    res.push_back(res.back() + odd.front());
                    odd.pop();
                }
                else
                {
                    if (!even.empty())
                    {
                        res.push_back(res.back() + even.front());
                        even.pop();
                    }
                    else
                    {
                        res.push_back(res.back() + odd.front());
                        odd.pop();
                    }
                }
            }
            int ans = 0;
            for (int val : res)
                if (val % 2 != 0)
                    ans++;
            cout << ans << "\n";
        }
    }

    return 0;
}