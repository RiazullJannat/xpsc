#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s, t_str;
        cin >> s >> t_str;

        // dp[j] holo t_str er j length match korar min operation
        vector<int> dp(m + 1, INF);
        vector<int> last_idx(m + 1, -1);

        dp[0] = 0;

        for (int i = 0; i < n; i++)
        {
            // Reverse loop jate eki character bar bar use na hoy
            for (int j = m; j >= 1; j--)
            {
                if (s[i] == t_str[j - 1])
                {
                    int current_op = INF;

                    if (j == 1)
                    {
                        // Prothom char match korle: jodi shuru theke na hoy tobe 1 op
                        current_op = (i == 0 ? 0 : 1);
                    }
                    else if (dp[j - 1] != INF)
                    {
                        // Agei match thakle: jodi majhkhane gap thake tobe +1 op
                        if (last_idx[j - 1] == i - 1)
                            current_op = dp[j - 1];
                        else
                            current_op = dp[j - 1] + 1;
                    }

                    // Jodi notun upaye kom ba soman operation-e match kora jay
                    // last_idx update kora important jate pore gap kom pawa jay
                    if (current_op <= dp[j])
                    {
                        dp[j] = current_op;
                        last_idx[j] = i;
                    }
                }
            }
        }

        if (dp[m] == INF)
        {
            cout << "-1\n";
        }
        else
        {
            // S er sheshe jodi baki thake kichu, shetar jonno 1 extra op
            int final_ans = dp[m];
            if (last_idx[m] < n - 1)
                final_ans++;

            cout << final_ans << "\n";
        }
    }

    return 0;
}