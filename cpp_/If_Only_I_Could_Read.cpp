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
//    int a, b;
//    cin >> a >> b;

   vector<int>v(n);

   for(int i = 0; i < n; i++){
           cin >> v[i];
   }
   vector<int>a = v;
   sort(a.begin(), a.end());
   if( a == v){
    cout << -1 << endl;
    return;
   }

    for(int i = 0; i < n-1; i++){
          if(v[i] > v[i + 1]){
            cout << i + 1 << " "<< i + 2 << endl;
            return;
          }
    }
  
  
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

