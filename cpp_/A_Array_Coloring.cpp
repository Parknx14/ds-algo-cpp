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
  int n;
  cin >> n;
  vector<int>v(n);
  for(int i = 0; i < n; i++) {
    cin>> v[i];
  }
  vector<int>x = v;
  sort(x.begin(), x.end());
  set<pair<int, int>>st;
  for(int i = 0; i < n - 2; i++) {
    st.insert({x[i], x[i+2]});
     st.insert({x[i + 2], x[i]});
  
  } 
 
    for (int i = 0; i < n - 1; i++) {
        if ((v[i] % 2) == (v[i + 1] % 2)) {
            cout << "NO" << endl;
            return;
        }
    }
  cout << "YES" << endl;

  
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
