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
        vector<int> cnt(4, 0); // Only 1 to 3 used
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }

        // Case 1: Keep 1s + at most one 2
        int case1 = cnt[1] + min(1, cnt[2]);

        // Case 2: Keep 3s + at most one 2
        int case2 = cnt[3] + min(1, cnt[2]);

        // Case 3: Only one 2
        int case3 = min(1, cnt[2]);

        int kept = max({case1, case2, case3});

        int deletions = n - kept;

        cout << deletions << "\n";
    }

    return 0;
}