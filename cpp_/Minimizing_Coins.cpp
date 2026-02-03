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
  
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
//   int t;
//   cin >> t;
//   while (t--) {
//     solve();
//   }
  int n, m;
  cin >> n >> m;
  vector<int>v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  vector<int>dp(m + 1, INT_MAX);
  dp[0] = 0;

  for(int i = 1; i <= m; i++) {
      for(int j = 0; j < (int)v.size(); j++) {
        
           if( i - v[j] >= 0) {
          dp[i] = min(dp[i],1 + dp[i - v[j]]);
        }
      }
  }
  cout << ((dp[m] == INT_MAX) ? -1 : dp[m]) << endl;
}
