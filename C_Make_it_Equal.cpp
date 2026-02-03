/*

   This code belongs to HalfbloodPrince
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a == b)
    {
        cout << "YES" << endl;
        return;
    }
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int val = a[i] % k;

        if (a[i] < 0)
        {
            val = val + k;
        }
        int mini = min(val, k - val);
        m[mini]++;
    }
    for (int i = 0; i < n; i++)
    {
        int val = b[i] % k;

        if (b[i] < 0)
        {
            val = val + k;
        }
        int mini = min(val, k - val);
        m[mini]--;
    }
    for (auto it : m)
    {
        if (it.second != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
