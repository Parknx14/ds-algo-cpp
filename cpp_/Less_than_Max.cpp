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
  int n;
  cin >> n;
  vector<int>v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
 
set<int> s;
int cnt = 0;

for (int i = 0; i < n; i++) {
   
    if (v[i] == 1 || s.count(v[i] - 1)) {
        s.insert(v[i]);
        cnt++;
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
