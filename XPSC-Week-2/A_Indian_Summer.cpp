#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    set<pair<string, string>> leaves;
    while (n--)
    {
        string species, color;
        cin >> species >> color;
        leaves.insert({species, color});
    }
    cout << leaves.size();
    return 0;
}