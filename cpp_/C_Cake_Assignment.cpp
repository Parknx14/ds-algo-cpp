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
  //    vector<int>v(n);

  //    for(int i = 0; i < n; i++){
  //            cin >> v[i];
  //    }
  int total = ((1LL << (a + 1)));
  int rem = total - b;
  int cnt = 0;

  if (total / 2 == b) {
    cout << 0 << endl;
    cout << endl;
    return;
  }

  vector<int> moves;
  while (b != rem) {
    int temp1 = rem;
    int temp2 = b;
    if (rem > b) {
      rem -= temp2;
      b += temp2;
      moves.push_back(1);
    } else {
      rem += temp1;
      b -= temp1;
      moves.push_back(2);
    }
    cnt++;
  }
  reverse(moves.begin(), moves.end());
  cout << cnt << endl;
  for (auto it : moves) {
    cout << it << " ";
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
