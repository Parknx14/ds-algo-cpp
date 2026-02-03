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
  int n, m;
  cin >> n >> m;
  vector<int>f(n), s(m);
  for(int i =0; i  < n; i++) {
    cin >> f[i];
  }
  for(int i =0; i  < m; i++) {
    cin >> s[i];
  }
  int cnt = 0;
  for(int i = 0; i < n; ++i ) {
     for(int j = 0; j < m; j++) {
        if(s[j] < f[i]) {
            cnt++;
        }
     }
  }
  cout << cnt << endl;
 
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
