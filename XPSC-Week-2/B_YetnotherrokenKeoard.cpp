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
        string s;
        cin >> s;
        stack<int> uper, lower;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'b' && !lower.empty())
            {
                s[lower.top()] = '0';
                s[i] = '0';
                lower.pop();
            }
            else if (s[i] == 'B' && !uper.empty())
            {
                s[uper.top()] = '0';
                s[i] = '0';
                uper.pop();
            }
            else if (s[i] != 'B' && s[i] != 'b')
            {
                if (s[i] >= 'a' && s[i] <= 'z')
                    lower.push(i);

                else if (s[i] >= 'A' && s[i] <= 'Z')
                    uper.push(i);
            }
        }
        for (char c : s)
            if (c != '0' && c != 'b' && c != 'B')
                cout << c;
        cout << endl;
    }
    return 0;
}