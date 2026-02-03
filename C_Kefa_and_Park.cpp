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
const int N = 1000001;
vector<int> adj[N];
int v[N];
bool vis[N];
int m;
     int dfs(int i, int cnt){
        vis[i] = 1;
        if(v[i] == 1){
            cnt++;
        }
        if(v[i] == 0){
            cnt = 0;
        }
        if(cnt > m){
            return 0;
        }
        int leaf = 0;
        int ans = 0;
        for(int j = 0; j  < adj[i].size(); j++){
             if(!vis[adj[i][j]]){
               leaf = 1;
               ans += dfs(adj[i][j], cnt);
             }
        }
        if(!leaf){
            return 1;
        }
        return ans;
            
         

     }
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
    //     solve();
    // }
     int n;
     cin >> n >> m;
    
     for(int i = 1; i <= n; i++){
        cin >> v[i];
     }
     n--;
     while(n--){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
     }
     int cnt = 0;
   cout <<  dfs(1 , cnt) << endl;
    

}   