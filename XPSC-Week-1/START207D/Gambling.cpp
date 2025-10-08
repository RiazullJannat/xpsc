#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= 6; i++)
    {
        if (n + i == 7)
            cout << i << endl;
    }
    return 0;
}