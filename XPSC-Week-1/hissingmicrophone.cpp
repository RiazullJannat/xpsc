#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    if (s.find("ss") != string::npos)
        cout << "hiss\n";
    else
        cout << "no hiss\n";
    return 0;
}