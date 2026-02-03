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
   int n;
   cin >> n;
   vector<int>v(n);
   unordered_map<int, int>m;
   for(int i = 0; i < n; i++){
           cin >> v[i];
           m[v[i]]++;
   }
   int ans = 0;
   int val;
   for(auto it : m){
     if(it.second > 1){
        val = it.first;
        ans += it.second - 1;
     }
     if(it.first > n){
        ans++;
     }
   }
   cout << ans << endl;

  
  
  
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

