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
   
   for(int i = 0; i < n; i++){
           cin >> v[i];
   }
   vector<int>ans = v;
   int mini = INT_MAX;
 
   for(int i = 0; i < n - 2; i++){
    for(int j = i + 2; j < n; j++){
          mini = min(mini, v[i] + v[j]);
    }
   }
   for(int i = 0; i < n-1; i++){
     mini = min(mini, v[i] + v[i+1]/2);
   }
   cout << mini << endl;


  

  
  
  
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

