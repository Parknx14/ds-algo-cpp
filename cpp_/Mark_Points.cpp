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
  string s;
  cin >> s;

  bool flag = true;
  for (int i = 0; i < n;) {
    if (s[i] == '1') {
      int j = i;
      while (j < n && s[j] == '1') j++;
      int len = j - i;
      if (len == 1 || len == 2) {
        flag = false;
        break;
      }
      i = j;
    } else {
      i++;
    }
  }
  cout << (flag ? "Yes" : "No") << endl;

  //    cout << "Yes" << endl;
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
