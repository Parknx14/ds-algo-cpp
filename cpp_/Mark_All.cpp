/** Created by OneAutumnleaf on 2025/04/23 22:41:08. **/
#include <bits/stdc++.h>

#ifdef MEGURINE
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using namespace std;

using i64 = int64_t;

void elysia() {
    i64 n, m;
    cin >> n >> m;
    i64 k = n * (n - 1) / 2 - m;
    i64 lo = 0, hi = n + 1;
    while (lo + 1 < hi) {
        i64 mid = (lo + hi) / 2;
        if (mid * (mid - 1) / 2 >= k) {
            hi = mid;
        } else {
            lo = mid;
        }
    }
    i64 mx = n - hi, mn = k > n - 1 ? 0 : n - 1 - k;
    debug(mx, mn);
    cout << (mn + mx) * (mx - mn + 1) / 2 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T = 1;
    cin >> T;
    cout << fixed << setprecision(12);
    while (T--)
        elysia();
    return 0;
}