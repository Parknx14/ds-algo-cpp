#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
int dp[101];
int f( int n){
    if(n <= 0){
        return 0;
    }
    if(dp[n] != -1){
        return dp[n];
    }
  
    int c1 = 4 + f(n-2);
    int c2 = 5 + f(n - 3);
    return dp[n] = min(c1, c2);
}
void solve() {
  int n;
  cin >> n;
  memset(dp, -1, sizeof(dp));
   cout << f( n) << endl;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
