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
  vector<int>v(n);
  int sum = 0;
  for(int i =0; i  < n; i++) {
    cin >> v[i];
    sum += v[i];
  }
  if(a < sum) {
    cout << "NO" << endl;
    return;
  }
  if((a - sum) % b == 0) {
    cout << "YES"  << endl;
    return;
  }
  cout << "NO" << endl;
  

 
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
