 /*
   jai Bajrang Bali
   author : Himanshu Dhruw
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int INF = 1e18;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    sort(a.begin(), a.end());

    int gmax = a[n - 1];
    int smax = (n >= 2 ? a[n - 2] : -INF);

    int ans = 0;

    for (int k = 2; k < n; k++) {
        int t1 = 2 * a[k];
        int t2 = (k == n - 1 ? smax : gmax);
        int threshold = max(t1, t2);

        int target = threshold - a[k];

        int l = 0, r = k - 1;

        while (l < r) {
            if (a[l] + a[r] > target) {
                ans += (r - l);
                r--;
            } else {
                l++;
            }
        }
    }

    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}


