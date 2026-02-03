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
  int n;
  cin >> n;
  vector<int>dp(n + 1, 0);
  dp[0] = dp[1] = 1;
  for(int i = 2; i <= n; i++) {
      for(int j = 1; j <= 6; j++) {
           if( i - j >= 0) {
        dp[i] = (dp[i] + dp[i - j]) % MOD;}
      }
  }
  cout << dp[n] << endl;
}
