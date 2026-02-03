/*

   This code belongs to HalfbloodPrince
*/
 
 
 





#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;

//  bool check(int val, vector<int>&v){
//     for(int i = 0; i < v.size(); i++){
//          if(v[i] > val){
//             return false;
//          }
//     }
//     return true;
//  }
  void solve(){
   int n;
   cin >> n;
   vector<int>v(n);
   set<int>s;
   for(int i = 0; i < n; i++){
           cin >> v[i];
           s.insert(v[i]);
   }
   for(int i = 1; i <= 3000; i++){
      if(!s.count(i)){
        cout << i << endl;
        return;
      }
   }
   cout << 3001 << endl;

  
  
  
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

