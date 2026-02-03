/*

   This code belongs to HalfbloodPrince
*/
 
 
 





#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;

  
  void solve(){
   int n, m;
   cin >> n >> m;
   vector<int>v(n);

   for(int i = 0; i < n; i++){
           cin >> v[i];
   }
   
   sort(v.begin(), v.end(), greater<int>());
  int ans = 0;
  vector<int>temp(n);
  int i = 0;
  while(i < n){
    temp[i] = v[i] * (m - i);
    i++;
  }
   for(int i = 0; i< n && i < m; i++){
        ans += temp[i];
   }
   cout << ans << endl;
  
  }



int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
  
    
}

