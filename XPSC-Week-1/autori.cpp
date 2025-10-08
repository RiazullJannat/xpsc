#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    vector<string> v;
    stringstream ss(s);
    string temp;
    while (getline(ss, temp, '-'))
    {
        v.push_back(temp);
    }
    string res = "";
    for (string s : v)
        res += s[0];
    cout << res << endl;
    return 0;
}