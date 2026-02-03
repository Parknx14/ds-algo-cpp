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
 int dp[100005][5];
   int f(int idx , vector<vector<int>>&v,int last){
            if(idx >= v.size()){
                return 0;
            }
            if(dp[idx][last] != -1){
                return dp[idx][last];
            }
 int maxii = INT_MIN;
    for(int i = 0; i< 3; i++){
        if(i != last){
           maxii = max(maxii, f(idx + 1, v, i) + v[idx][i]);  
        }
    }
    return dp[idx][last] = maxii;
   }


 void solve(){
    int n;
    cin >> n;
   //  cout << 2 * n << endl;
   // string s;
   // cin >> s;

   // vector<int>v(n);
   // for(int i = 0; i < n; i++){
   //  cin >> v[i];
   // }
   // for(int i = 0; i < n; i++){

   // }
   vector<vector<int>>mat(n, vector<int>(3,0));
   for(int i = 0; i < n; i++){
    for(int j = 0; j< 3; j++){
        cin >> mat[i][j];
    }
   }
  
   int ans = f(0, mat, 3);

   cout << (ans == INT_MIN ? -1 : ans) ;
  
  
}

int32_t main() {
      
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      memset(dp,-1,sizeof(dp));
   //  int t;
   //  cin >> t;
   //  while(t--){
   //      solve();
   //  }
    solve();

   //  cout << 100 % 12<< endl;
    
    }