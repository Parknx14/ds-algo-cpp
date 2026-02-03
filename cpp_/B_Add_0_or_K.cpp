/*

   This code belongs to HalfbloodPrince
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans = gcd(ans, v[i]);
  }

  if (ans > 1) {
    for (int i = 0; i < n; i++) {
      cout << v[i] << " ";
    }
    cout << endl;
    return;
  }

  cout << v[0] << " ";
  for (int i = 1; i < n; i++) {
    cout << v[i] + k << " ";
  }
  cout << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  // solve();
}
