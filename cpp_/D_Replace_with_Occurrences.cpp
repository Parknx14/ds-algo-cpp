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
 set<int>s;
   map<int, int>m;
   for(int i = 0; i < n; i++){
           cin >> v[i];
           s.insert(v[i]);
           m[v[i]]++;
             
   }
  
   
//    int sum = 0;
//    for(auto it : s){
//     sum += it;
//    }
//    if(sum > n){
//     cout << -1 << endl;
//     return;
//    }

  
    for (auto it : m) {
        if (it.second % it.first != 0) {
           
            cout << -1 << endl;
            return;
        }
    }

  
     int val = 1;
   map<int, int>m2;
   for(auto it : m){
    m2[it.first] = val;
    val++;
   }
   for(int i = 0; i < n; i++){
      cout << m2[v[i]] <<  " ";
   }
   cout << endl;
   
  
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
