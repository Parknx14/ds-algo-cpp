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
  int n;
  cin >> n;
  vector<int> v(n);

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      v[i] = -1;
    } else {
      v[i] = 3;
    }
  }
  if (n % 2 == 0) {
    v[n - 1] = 2;
  }
  for (int i = 0; i < n; i++) {
    cout << v[i] << " ";
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
}
