/*

   This code belongs to parkxiv*/
 
 
 







#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;

void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
   for(int i = 0; i < n; i++) {
    cin >> v[i];
   }
   int maxi = *max_element(v.begin(), v.end());
   cout << maxi * n << endl;
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
