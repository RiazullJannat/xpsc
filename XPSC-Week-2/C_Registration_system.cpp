#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    map<string, int> db;
    for (int i = 0; i < t; i++)
    {
        string val;
        cin >> val;
        if (!db.count(val))
        {
            db[val] = 1;
            cout << "OK" << endl;
        }
        else
        {
            cout << val << db[val] << endl;
            db[val]++;
        }
    }
    return 0;
}