/*

   This code belongs to parkxiv*/
 
 
 







#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;



// 5 2 -8 1
void solve() {

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        // suffix max of b
        vector<int> suf(n);
        suf[n - 1] = b[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suf[i] = max(b[i], suf[i + 1]);
        }

        // best achievable value
        vector<int> best(n);
        for (int i = 0; i < n; i++) {
            best[i] = max(a[i], suf[i]);
        }

        // prefix sum
        vector<int> pref(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + best[i];
        }

        while (q--) {
            int l, r;
            cin >> l >> r;
            l--; r--;
            cout << pref[r + 1] - pref[l] << " ";
        }
        cout << "\n";
    }
    


int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  
  
}
}