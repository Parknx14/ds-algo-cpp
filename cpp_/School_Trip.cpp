/*

   This code belongs to parkxiv*/
 
 
 







#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;



// 5 2 -8 1
void solve() {
  int n, a, b;
  cin >> n >> a >> b;
   if(a % b == 0) {
    cout << 0 << endl;
    return;
   }
   
 
  int r = a % b;
        int ans = a;
        ans = min(ans, r);
        if (a + (b - r) <= n) {
            ans = min(ans, b - r);
        }
        cout << ans << endl;;


 
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
