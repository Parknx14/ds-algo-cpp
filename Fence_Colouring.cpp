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
  map<int, int>m;
  
   for(int i = 0; i < n; i++){
           cin >> v[i];
           m[v[i]]++;
   }
     
        int k = 0;
        for (int i = 0; i < n; i++)
            if (v[i] != 1){
             k++;
            } 

        int ans = k;

       
        for (auto it : m) {
            int x = it.first;
            int cnt = it.second;
            ans = min(ans, 1 + (n - cnt));
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

