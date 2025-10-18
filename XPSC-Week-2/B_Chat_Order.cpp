#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    stack<string> st;
    while (t--)
    {
        string s;
        cin >> s;
        st.push(s);
    }
    set<string> tr;
    while (!st.empty())
    {
        if (tr.count(st.top()))
        {
            st.pop();
        }
        else
        {
            cout << st.top() << endl;
            tr.insert(st.top());
            st.pop();
        }
    }
    return 0;
}