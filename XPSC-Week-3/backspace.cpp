#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, ans = "";
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (!ans.empty() && s[i] == '<')
            ans.pop_back();
        else
            ans += s[i];
    }
    cout << ans << endl;
    return 0;
}