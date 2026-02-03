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
  int a, b;
  cin >> a >> b;
  if((a * b) % 2 != 0){
    cout << a* b + 1 << endl;
    return;
  }
  int add = (a % 2 != 0) ? 2 : 1;
  if (b % 2 == 1) {
    if (a % 2 != 0) {
      cout << a * b + 1 << endl;
    } else {
      cout << -1 << endl;
    }
    return;
  }
  int cnt = 0;
  int num = b;
  while ((num % 2) == 0) {
    num /= 2;
    cnt++;
  }
  if ((a % 2 != 0) && cnt == 1) {
    cout << -1 << endl;
    return;
  }
  int ans1 = (a * add) + b / add;
  int ans2 = (a * (b / 2)) + 2;
  int res = max(ans1, ans2);
  cout << res << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
