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
  unordered_map<int, int> m;
    //    vector<int>v(n);

//    for(int i = 0; i < n; i++){
//            cin >> v[i];
//    }
   
  vector<pair<int, int>> vp(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
    m[v[i]]++;
  }

  for (auto it : m) {
    if (it.second % k != 0) {
      cout << 0 << endl;
      return;
    }
  }

  unordered_map<int, int> r;
  for (auto it : m) {
    r[it.first] = it.second / k;
  }

  unordered_map<int, int> curr;
  int i = 0, j = 0;
  int ans = 0;
  while (j < n) {
    while (i < n && curr[v[i]] + 1 <= r[v[i]]) {
      curr[v[i]]++;
      ++i;
    }
    ans += (i - j);
    if (i > j) {
      curr[v[j]]--;
      ++j;
    } else {
      ++i;
      ++j;
    }
  }
  cout << ans << endl;
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
