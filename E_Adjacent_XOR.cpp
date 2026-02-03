/*


   This code belongs to HalfbloodPrince(himanshu)


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
  vector<int> a(n), b(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  if (a[n - 1] != b[n - 1]) {
    cout << "NO" << endl;
    return;
  }
  vector<int> ans(n);
  for (int i = 0; i < n; i++) {
    ans[i] = a[i] ^ b[i];
  }
  bool flag = true;
  int i = 0;
  while (i < n && flag) {
    if (ans[i] == 0) {
      i++;
      continue;
    }
    int j = i;
    while (true) {
      if (ans[j] == a[j + 1]) {
        i = j + 1;
        break;
      }
      if (j == n - 2) {
        flag = false;
        break;
      }
      if (ans[j + 1] != (ans[j] ^ a[j + 1])) {
        flag = false;
        break;
      }
      j++;
    }
  }
  // // if(a[0] != b[0]){
  // }
  if (flag) {
    cout << "YES" << endl;
    return;
  }
  cout << "NO" << endl;
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
