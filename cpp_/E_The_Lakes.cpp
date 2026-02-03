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

  void dfs(int i , int j ,vector<vector<int>>&mat, int &cnt,vector<vector<int>>&vis){
    int n = mat.size();
    int m = mat[0].size();
             if(i < 0 || j < 0 || i >= n || j >= m || mat[i][j] == 0){
                return;
             }
            if(vis[i][j] == 1){
                return;
            }
        cnt += mat[i][j];
        vis[i][j] = 1;
     dfs(i + 1, j, mat,cnt, vis);
    dfs(i , j+1, mat,cnt, vis);
      dfs(i -1, j, mat,cnt, vis);
      dfs(i , j-1, mat,cnt, vis);
     

  }


 void solve(){
    int n , m;
    cin >> n >> m;
   //  cout << 2 * n << endl;
   // string s;
   // cin >> s;
   vector<vector<int>>mat(n, vector<int>(m,0));
   vector<vector<int>>vis(n, vector<int>(m,0));
   for(int i = 0; i < n; i++){
    for(int j = 0; j < m ; j++){
        cin >> mat[i][j];
    }
   }
   int cnt =0;
   int maxii = 0;
   for(int i = 0; i < n; i++){
    for(int j = 0; j < m ; j++){
        cnt =0;
         if(mat[i][j] > 0 && vis[i][j] == 0 ){
            dfs(i, j,mat, cnt,vis);
           
             maxii = max(maxii, cnt);
         }
         
    }
   
   }
   cout << maxii << endl;
  

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