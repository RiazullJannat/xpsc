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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int chef = 0, antiChef = 0, winCnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                chef++;
                if (chef > antiChef)
                    winCnt++;
            }
            else
            {
                antiChef++;
                if (chef > antiChef)
                    winCnt++;
            }
        }
        cout << winCnt << "\n";
    }

    return 0;
}