#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    set<string> st;
    while (t--)
    {
        string s;
        cin >> s;
        if (st.count(s))
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
            st.insert(s);
        }
    }
    return 0;
}