#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = count(s.begin(), s.end(), '0');
    cout << cnt << nl;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') cout << (i + 1) << " ";
    }
    cout << nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) solve();

    return 0;
}