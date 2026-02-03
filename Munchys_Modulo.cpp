#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    sort(a.begin(), a.end());
    int ans = 0;

    // For all pairs (j, k)
    for (int j = 0; j < n; ++j) {
        for (int k = j + 1; k < n; ++k) {
            int sum = a[j] + a[k];

            // Find largest Ai such that Ai != Aj, Ak and Ai > sum
            auto it = upper_bound(a.begin(), a.end(), sum);
            if (it != a.begin()) {
                --it;
                int ai = *it;
                if (ai != a[j] && ai != a[k]) {
                    ans = max(ans, ai % sum);
                } else {
                    // Try one before if same index
                    if (it != a.begin()) {
                        --it;
                        ai = *it;
                        if (ai != a[j] && ai != a[k]) {
                            ans = max(ans, ai % sum);
                        }
                    }
                }
            }
        }
    }

    cout << ans << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
}
x`