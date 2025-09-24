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
        string s;
        cin >> s;
        int totalOpt = 0;
        while (!s.empty())
        {
            string temp = "";
            for (int i = 0; i < s.size(); i += 2)
            {
                if (i + 1 < s.size())
                {
                    temp += s[i + 1];
                }
            }
            s = temp;
            totalOpt++;
        }
        cout << totalOpt << "\n";
    }

    return 0;
}