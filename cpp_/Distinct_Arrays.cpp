/*
   jai Bajrang Bali
   author : Himanshu Dhruw
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
   //  cout << 2 * n << endl;
   // string s;
   // cin >> s;

   vector<int>v(n);
  
   for(int i = 0; i < n; i++){
    cin >> v[i];

   }
   sort(v.begin(),v.end());
   int ans = 1;
 
   for(int i = 0; i < n; i++){
    int choice = v[i] - i;
    if(v[i] <= 0){
      cout << 0 << endl;
      return;
    }
    ans = ((ans* choice) % 998244353) % 998244353;
    
   }
 
   cout << ans << endl;
  

 
  
  
}

int32_t main() {
      
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
    int t;
    cin >> t;
    while(t--){
        solve();
    }
   //  solve();

    // cout << 100 % 12<< endl;
    
    }