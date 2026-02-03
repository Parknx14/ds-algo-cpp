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
int dp[3][40001];
  int dfs(int i, vector<int>&v, int n, int sum){
       if(sum == n){
        return 0;
     }
    
   
     if(i >= v.size() || sum > n){
        return INT_MIN;
     }
     if(dp[i][sum] != -1){
        return dp[i][sum];
     }
    
     int maxi = INT_MIN, maxi2 = INT_MIN;
  
       maxi  = max(maxi, 1LL + dfs(i, v,n, sum + v[i]));
    
     maxi2 = max(maxi2,dfs(i+1, v, n, sum));
     return dp[i][sum] = max(maxi2, maxi);

  }
  void solve(){
   int n, a, b, c;
   cin >> n >> a>> b >> c;
   vector<int>v= {a, b, c};
   // unordered_map<int,int>m;
   // set<int>s;
   // vector<int>a(n);
   // priority_queue<int>pq;
//    for(int i = 0; i < n; i++){
//     cin>> v[i];
//    }
int sum = 0;
memset(dp, -1, sizeof(dp));
sort(v.begin(), v.end());
  cout << dfs(0, v, n, sum);

  dp[]
    
  
  
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

