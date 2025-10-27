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
        string t1 = "CODETOWN", t2;
        cin >> t2;
        set<char> vowel = {'A', 'E', 'I', 'O', 'U'};
        string f = "YES\n";
        for (int i = 0; i < t1.length(); i++)
        {
            if (vowel.count(t1[i]) && !vowel.count(t2[i]))
            {
                f = "NO\n";
                break;
            }
            else if (!vowel.count(t1[i]) && vowel.count(t2[i]))
            {
                f = "NO\n";
                break;
            }
        }
        cout << f;
    }

    return 0;
}