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
   bool flag = false;
   sort(v.begin(), v.end());
   for(int i = 1; i < n; i++){
            if(v[i] == v[i-1]){
                flag = true;
                break;
            }
   }
   if(flag){
    cout << "YES" << endl;
    return;
   }
   cout << "NO" << endl;
  
  
  
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

