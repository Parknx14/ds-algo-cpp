/*

This code belongs to HalfbloodPrince

*/
 
 
 







#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;
int w;
 int solve(int idx, int cost, vector<pair<int, int>>&vp) {
   if(idx >= vp.size()) {
      return 0;
   }
   int c1 = 0;
   if(cost + vp[idx].first <= w) {
      
    c1 = vp[idx].second + solve(idx + 1, cost + vp[idx].first, vp);
   }
   int c2 = solve(idx + 1, cost, vp);
   return max(c1, c2);
}


int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
//   int t;
//   cin >> t;
//   while (t--) {
//     solve();
//   }
 int n, x;
 cin >> n >> x;
 w = x;
 vector<int>cost(n), pages(n);
 for(int i = 0; i < n; i++) {
    cin >> cost[i];
 }
for(int i = 0; i < n; i++) {
    cin >> pages[i];
 }
vector<int> dp(x + 1, 0);

for (int i = 0; i < n; i++) {
    for (int c = x; c >= cost[i]; c--) {
        dp[c] = max(dp[c], dp[c - cost[i]] + pages[i]);
    }
}

cout << dp[x];

  
}
