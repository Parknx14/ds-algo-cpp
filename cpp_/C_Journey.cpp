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


    //   void solve(){
    //    int n;
    //    cin >> n;
    //    vector<int>v(n);
    //    // unordered_map<int,int>m;
    //    // set<int>s;
    //    // vector<int>a(n);
    //    // priority_queue<int>pq;
    
    //    for(int i = 0; i < n; i++){
    //       cin >> v[i];
    

    //    }
    //    if((v[0] == 1 && v[1] == 1) || (v[0] == 2 && v[1] == 2)){
    //       for(int i = 2; i < n; i++){
    //           if(v[])
    //       }
    //    }
    //       for(int i = 0; i < n; i++){
    //   int mini = max(v[i] + 1, i);
    //             ans = min(ans, mini);
    //    }
        
    //    cout << ans << endl;
        
    
    
    //   }
 int var = 0;
 double dfs(int i, vector<vector<int>>&adj, vector<int>&vis){
       if(vis[i] == 1){
        return 0;
       }
       double ans = 0;
       vis[i] = 1;
       double flag = 0;
       for(int j = 0; j < adj[i].size();  j++){
          if(vis[adj[i][j]] != 1){
          ans += 1 + dfs(adj[i][j],adj, vis);
          flag++;
          
          }
       }
       if(flag == 0){
        return 0;
       }
       return ans/ flag ;
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
        cin >> n;
        vector<vector<int>>adj(n + 1);
    
        for(int i = 0; i < n-1; i++){
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        //    for(int i = 0; i < n; i++){
        //     cout << i <<  " :";
        //      for(auto it : adj[i]){
        //         cout << it <<  " ";
        //      }
        //      cout << endl;
        //    }
        vector<int>vis(n+1, 0);
     cout <<fixed << setprecision(10) << dfs(1, adj, vis) ;
        
    }

