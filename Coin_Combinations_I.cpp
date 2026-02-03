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
  vector<int>dp(m + 1, 0);
  dp[0] = 1;

  for(int i = 0; i < (int)v.size(); i++) {
      for(int j = 1; j <= m; j++) {
        
           if( j - v[i] >= 0) {
          dp[j] =  (dp[j] + dp[j - v[i]]) % MOD;
        }
      }
  }
  cout <<dp[m] << endl;
}
