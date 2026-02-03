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
  set<int> st;
  //   queue<int> q;
  //   q.push(n);
  st.insert(n);
  //   if(n <= 2){
  //     cout << 1 << endl;
  //   }
  int ans;
  if (n % 2 != 0) {
    ans = (n + 1) / 2;
  } else {
    ans = (n / 2) + (n / 2 - n / 4);
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
