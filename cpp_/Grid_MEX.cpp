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

  //    for(int i = 0; i < n; i++){
  //            cin >> v[i];
  //    }
  if(n == 1){
    cout << 0 << endl;
    return;
  }
  vector<vector<int>> ans(n, vector<int>(n, -1));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int x = 0;; x++) {
        bool flag = true;

        for (int k = 0; k < n; k++) {
          if (k != j && ans[i][k] == x) {
            flag = false;
            break;
          }
          if (k != i && ans[k][j] == x) {
            flag = false;
            break;
          }
        }
        if (flag) {
          ans[i][j] = x;
          break;
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++){
    cout << ans[i][j] << " ";}
    cout << endl;
  }
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
