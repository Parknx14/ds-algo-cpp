/*

   This code belongs to HalfbloodPrince
*/
 
 
 





#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;
 void dfs(int i, vector<int>&vis, vector<vector<int>>&adj){
      vis[i] = 1;
      for(int j = 0; j < adj[i].size(); j++){
          if(vis[adj[i][j]] == -1){
            dfs(adj[i][j], vis, adj);
          }
      }
 }
  
  void solve(){
   int n;
   cin >> n;
   vector<pair<int, int>>v(n);

   for(int i = 0; i < n; i++){
           int a, b;
           cin >> a >> b;
           v[i] = {a, b};
   }
    vector<vector<int>>adj(1001);
    for(int i = 0; i < n - 1; i++){
        
        for(int j = i + 1; j < n; j++){
                 if(v[i].first == v[j].first || v[i].second == v[j].second){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                 }
        }
    }
    int cnt = 0;
    vector<int>vis(n, -1);
    for(int i = 0; i < n; i++){
        if(vis[i] == -1){
            dfs(i, vis, adj);
            cnt++;
        }
    }
    cout << cnt - 1 << endl;

  
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

