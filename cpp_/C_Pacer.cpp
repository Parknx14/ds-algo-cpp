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
  int n, m;
  cin >> n >> m;
  //    vector<int>v(n);

//    for(int i = 0; i < n; i++){
//            cin >> v[i];
//    }
   
  vector<pair<int, int>> v(n);

  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    v[i] = {a, b};
  }
  int t1 = 0;
  int t2 = 0;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int t = v[i].first;
     int b = v[i].second;
    
    int neww;
    if ((b == 0 && t2 == 0) || (b == 1 && t2 == 1)) {
      neww = 0;
    } else {
      neww = 1;
    }
    int temp = t - t1;

    if(temp % 2 != neww){
      ans++;
    }
    t1 = t;
    t2 = b;
  }
  cout << m - ans << endl;
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
