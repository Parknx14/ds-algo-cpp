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
    int n, k;
    cin >> n >> k;
   //  cout << 2 * n << endl;
   // string s;
   // cin >> s;

   vector<int>v(n);
   for(int i = 0; i < n; i++){
    cin >> v[i];
   }
  double ans ;
   sort(v.begin(),v.end());
   ans = max((double)v[0] ,(double) (k - v[n-1]));
   
   
   for(int i = 0; i < n-1; i++){
      ans = max(ans, (v[i+1] - v[i])/2.0);
   }
   
   
 cout << fixed << setprecision(10) << ans << endl;
 

}

int32_t main() {
      
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
    // int t;
    // cin >> t;
    // while(t--){
    //     solve();
    // }
   
     solve();
   
    
    }