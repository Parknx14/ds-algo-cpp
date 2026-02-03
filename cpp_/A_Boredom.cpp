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
unordered_map<int, int>m;
int dp[100001];
  int solve(int i, vector<int>&v){
    if(i >= v.size()){
        return 0;
    }
    if(dp[i] != -1){
        return dp[i];
    }
    int c2 = 0, c1 = 0;
    int idx = i + 1;
    while(idx < v.size() && v[idx] - v[i] == 1){
        idx++;
    }
     c2 = max(c2, m[v[i]]*v[i] + solve(idx, v));
  

     
    c1 = solve(i + 1, v);

    return dp[i] = max(c1, c2);
  }

  void solve(){
   int n;
   cin >> n;
   vector<int>v(n);
  
   set<int>s;
   // vector<int>a(n);
   // priority_queue<int>pq;
   vector<int>ans;
 memset(dp, -1, sizeof(dp));
 for(int i = 0; i < n; i++){
    cin >> v[i];
    m[v[i]]++;
    s.insert(v[i]);
   }
   for(auto it : s){
    ans.push_back(it);
   }
   sort(ans.begin(), ans.end());
   
   
 
   cout << solve(0, ans);
  
  
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

