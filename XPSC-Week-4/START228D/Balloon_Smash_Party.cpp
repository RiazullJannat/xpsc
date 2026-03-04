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
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];

        vector<int> balloons(N, 0);
        vector<bool> in_party(N, true);
        set<int> present_friends;

        for (int i = 0; i < N; i++)
        {
            present_friends.insert(i);
        }

        int current_balloons_spread = 0;

        vector<int> total_hits_at_index(N, 0);

        for (int i = 0; i < N; i++)
        {
            if (present_friends.find(i) == present_friends.end())
                continue;

            present_friends.erase(i); 

            auto it = present_friends.begin();
            vector<int> to_remove;

            for (; it != present_friends.end(); ++it)
            {
                int friend_idx = *it;
                balloons[friend_idx]++;
                if (balloons[friend_idx] >= A[friend_idx])
                {
                    to_remove.push_back(friend_idx);
                }
            }

            for (int idx : to_remove)
            {
                present_friends.erase(idx);
            }
        }

        for (int i = 0; i < N; i++)
        {
            cout << balloons[i] << (i == N - 1 ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}