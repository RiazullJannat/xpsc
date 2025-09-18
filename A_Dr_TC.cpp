#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<string> ss;
        for (int i = 0; i < n; i++)
        {
            string sss = s;
            if (sss[i] == '1')
                sss[i] = '0';
            else
                sss[i] = '1';
            ss.push_back(sss);
        }
        int res = 0;
        for (auto val : ss)
            for (char c : val)
                if (c == '1')
                    res++;
        cout << res << endl;
    }
    return 0;
}