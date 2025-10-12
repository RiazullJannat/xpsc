#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int i = 0, sereja = 0, dima = 0;
    while (!v.empty())
    {
        if (i % 2 == 0)
        {
            int l = v[0];
            int r = v.size() > 1 ? v[v.size() - 1] : 0;
            if (l > r)
            {
                sereja += l;
                v.erase(v.begin());
            }
            else
            {
                sereja += r;
                v.pop_back();
            }
        }
        else
        {
            int l = v[0];
            int r = v.size() > 1 ? v[v.size() - 1] : 0;
            if (l > r)
            {
                dima += l;
                v.erase(v.begin());
            }
            else
            {
                dima += r;
                v.pop_back();
            }
        }
        i++;
    }
    cout << sereja << " " << dima << endl;
    return 0;
}