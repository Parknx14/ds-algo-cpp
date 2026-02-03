/*

   This code belongs to HalfbloodPrince
*/
 
 
 







#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;


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
  vector<int>ans;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if(ans.empty() || ans.back() <= x) {
        ans.push_back(x);
    }
    else{
        auto it = upper_bound(ans.begin(), ans.end(), x);
        *it = x;
    }}
 cout << ans.size() << endl;
  
}

