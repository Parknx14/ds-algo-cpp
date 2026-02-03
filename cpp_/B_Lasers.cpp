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
   int n, m, x, y;
   cin >> n >> m >> x >> y;
   vector<int>v(n), h(m);

   for(int i = 0; i < n; i++){
           cin >> v[i];
   }
    for(int i = 0; i < m; i++){
           cin >> h[i];
   }
   sort(v.begin(), v.end());
      sort(h.begin(), h.end());
    //   if(x < h[0] && y < v[0]){
    //     cout << 0 << endl;
    //     return;
    //   }
      cout << n + m << endl;
   

   
  
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

