#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> co(a);
        auto ai = max_element(a.begin(), a.end());
        auto i = distance(a.begin(), ai);
        auto aj = min_element(a.begin(), a.end());
        //cout << *aj << "\n";
        auto j = distance(a.begin(), aj);
        cout << i + 1 << " " << j + 1 << "\n";
    }
    return 0;
}