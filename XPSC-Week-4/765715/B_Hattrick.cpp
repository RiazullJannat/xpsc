#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;

    while (t--) {
        vector<string> over(6); 
        
        for (int i = 0; i < 6; ++i) {
            cin >> over[i];
        }

        string res = "NO";
        for (int i = 0; i <= 3; ++i) {
            if (over[i] == "W" && over[i+1] == "W" && over[i+2] == "W") {
                res = "YES";
                break;
            }
        }

        cout << res << "\n";
    }

    return 0;
}