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
    int n,k;
    cin >> n >> k;
   //  cout << 2 * n << endl;
   // string s;
   // cin >> s;

   vector<int>v(n);
   for(int i = 0; i < n; i++){
    cin >> v[i];
   }
   sort(v.begin(),v.end());
 
   int ans = INT_MIN;
   vector<int>prefix(n+1,0);

   for(int i = 0; i < n; i++){
    prefix[i+1] = v[i] + prefix[i];
   }
   for(int i = 0; i <= k; i++ ){
    ans = max(ans, prefix[n  -(k-i)] -prefix[2*i]);
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
   

   
    
    }