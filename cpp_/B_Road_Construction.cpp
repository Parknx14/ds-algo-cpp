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
//    vector<int>v(n);

//    for(int i = 0; i < n; i++){
//            cin >> v[i];
//    }
     set<int>s;
     while(m--){
        int a, b;
        cin >> a >> b;
        s.insert(a);
        s.insert(b);
     }
     int ans ;
     for(int i = 1; i <= n; i++){
          if(!s.count(i)){
            ans = i;
            break;
          }
     }
     cout << n - 1 << endl;
    for(int i = 1; i <= n; i++){
        if(i != ans){
            cout << ans << " "<< i << endl;
        }
    }
     

  
  
  
  }



int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
  
    
}

