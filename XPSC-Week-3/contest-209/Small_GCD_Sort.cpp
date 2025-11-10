#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
class Compare
{
public:
    bool operator()(const pair<int, int> &a, const pair<int, int> &b)
    {
        if (a.first != b.first)
            return a.first < b.first;

        return a.second > b.second;
    }
};

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
        priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;
        for (int i = 1; i <= n; i++)
        {
            int g = gcd(i, n);
            pq.push({g, i});
        }
        while (!pq.empty())
        {
            cout << pq.top().second << " ";
            pq.pop();
        }
        cout << "\n";
    }

    return 0;
}