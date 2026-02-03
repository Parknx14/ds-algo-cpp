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
//    int n, m;
//    cin >> n >> m;
// //    vector<int>v(n);

// //    for(int i = 0; i < n; i++){
// //            cin >> v[i];
// //    }

//  if(m % 2 != 0){
//     cout << n << endl;
//     return;
//  }
//  cout << 0 << endl;
   string s;
   cin >> s;
   int cnt = 0;
   for(int i = 0; i < s.size(); i++) {
     if(s[i] == 'Y') {
        cnt++;
     }
   }
   cout << ((cnt > 1) ? "NO" : "YES") << endl;
  
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

