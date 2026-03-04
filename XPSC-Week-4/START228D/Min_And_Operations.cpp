#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        long long N;
        cin >> N;
        long long count = N / 2;
        long long result = (count * (2 + N)) / 2;

        cout << result << endl;
    }
    return 0;
}