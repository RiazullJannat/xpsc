#include <bits/stdc++.h>
using namespace std;

long long power(long long base, long long exp)
{
    long long res = 1;
    base %= 1000000007;
    while (exp > 0)
    {
        if (exp % 2 == 1)
            res = (res * base) % 1000000007;
        base = (base * base) % 1000000007;
        exp /= 2;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        long long MOD = 1000000007;
        if (n == 1)
        {
            cout << 0 << "\n";
            continue;
        }

        long long sum_1_to_m = (m % MOD * ((m + 1) % MOD)) % MOD;
        sum_1_to_m = (sum_1_to_m * power(2, MOD - 2)) % MOD;

        long long total_elements_sum = (n % MOD * sum_1_to_m) % MOD;
        total_elements_sum = (total_elements_sum * power(m, n - 1)) % MOD;

        long long total_min_sum = 0;
        for (int i = 1; i <= m; i++)
        {
            total_min_sum = (total_min_sum + power(i, n)) % MOD;
        }

        long long ans = (total_elements_sum - total_min_sum + MOD) % MOD;
        cout << ans << "\n";
    }
    return 0;
}