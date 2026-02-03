/*

   This code belongs to parkxiv*/
 
 
 







#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;

void solve() {
  int n;
  cin >> n;
  vector<int>a(n), b(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
 for(int i = 0; i < n; i++) {
    cin >> b[i];
  }


    sort(a.begin(), a.end());

    vector<int> pref(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        pref[i + 1] = pref[i]  + b[i];
    }

    int ans = 0;

    for (int i = 0; i < n; ++i) {
        if (i > 0 && a[i] == a[i - 1]) {
             continue;
        }

    int d = a[i];
        int rem = n - i;

        auto it = upper_bound(pref.begin(), pref.end(), rem);
       int idx = it - pref.begin();
int k = idx - 1;

        if (k > 0) {
            ans = max(ans, d * k);
        }
    }

    cout << ans<< endl; }

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  
}
