#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    set<string> used;
    vector<list<string>> oldToNew;
    while (n--)
    {
        string oldName, newName;
        cin >> oldName >> newName;
        if (!used.count(oldName) && !used.count(newName))
        {
            used.insert(oldName);
            used.insert(newName);
            oldToNew.push_back({oldName, newName});
        }
        else
        {
            used.insert(newName);
            for (auto &l : oldToNew)
                if (l.back() == oldName)
                    l.push_back(newName);
        }
    }
    cout << oldToNew.size() << endl;
    for (auto l : oldToNew)
        cout << l.front() << " " << l.back() << endl;
    return 0;
}