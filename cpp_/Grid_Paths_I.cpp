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
  vector<string>g;
  int num = n;
  while(num--) {
    string s;
    cin >> s;
    g.push_back(s);
  }
  vector<vector<int>>dp(n + 1, vector<int>(n + 1, 0));
  dp[0][0] = 1;
  if(g[0][0] == '*' || g[n - 1][n - 1] == '*') {
    cout << 0;
    return 0;
    
  }
  for(int i = 0; i < n; i++) {
     for(int j = 0; j < n; j++) {
          if(g[i][j] == '*') {
            continue;
          }
          if(i == 0 && j == 0) {
            continue;
          }
         
        int left = ((j - 1 >= 0) ?  dp[i][j - 1] : 0 );
        int up = ((i - 1 >= 0 )? dp[i - 1][j] : 0);
        dp[i][j] = (left + up) % MOD;
     }
  }
  cout << dp[n - 1][n - 1];
}
