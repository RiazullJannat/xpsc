#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; 
    cin >> T;

    while (T--) {
        int N;
        ll K;
        string S;
        cin >> N >> K >> S;

        ll score_in_S = 0;

        for (int i = 0; i < N - 1; ++i) {
            char a = S[i], b = S[i + 1];

            // ✅ Priority: exact match > match with I
            if (a == b)
                score_in_S++;
            else if (a == 'I' || b == 'I') 
                score_in_S++;
        }

        // Now calculate boundary contribution between blocks
        char last = S[N - 1];
        char first = S[0];
        ll boundary = 0;

        if (last == first)
            boundary = 1;
        else if (last == 'I' || first == 'I')
            boundary = 1;

        ll total_score = score_in_S * K + boundary * (K - 1);

        cout << total_score << "\n";
    }

    return 0;
}