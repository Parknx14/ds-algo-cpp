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
  // int t;
  // cin >> t;
  // while (t--) {
  //   solve();
  // }
  int n;
  cin >> n;
  vector<int>dp(n + 1, INT_MAX);
  dp[0] = 0;
  for(int i = 1; i <= n; i++) {
      int num = i;
      while(num > 0) {
        int digit = num % 10;
        if( digit >= 0) {
        dp[i] = min(dp[i], 1 + dp[i - digit]);}
        num /= 10;

      }
  }
  cout << ((dp[n] == INT_MAX)? -1 : dp[n]);
}
