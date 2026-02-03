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

   void dfs(int i , int j ,vector<string>&mat, int &cnt,vector<vector<int>>&vis){
    int n = mat.size();
    int m = mat[0].size();
      if(i < 0 || j < 0 || i >= n || j >=  m || vis[i][j] == 1){
        return;
      }
      if(mat[i][j] == '#' || mat[i][j] == '*' || cnt <= 0){
        return;
      }
      mat[i][j] = '*';
      vis[i][j] = 1;
      cnt--;
       dfs(i + 1, j, mat,cnt, vis);
      dfs(i , j+1, mat,cnt, vis);
      dfs(i -1, j, mat,cnt, vis);
      dfs(i , j-1, mat,cnt, vis);




   }


 void solve(){
    int n , m, k;
        cin >>n >> m >> k;
   //  cout << 2 * n << endl;
   // string s;
   // cin >> s;

  vector<string>mat(n);
   vector<vector<int>>vis(n, vector<int>(m,0));
   for(int i = 0; i < n; i++){
   
        cin >> mat[i];
    }
   
   int cnt =0;
   int maxii = 0;
   for(int i = 0; i < n; i++){
    for(int j = 0; j < m ; j++){
     if(mat[i][j] == '.'){
        cnt++;
     }
         
    }
   
   }
     int turn  = cnt - k;
     bool done = false;
   for(int i = 0; i < n && !done; i++){
  
    for(int j = 0; j < m ; j++){
    
         if(mat[i][j] == '.' && vis[i][j] == 0 ){
            dfs(i, j,mat, turn,vis);
                 done = true;
           

         }
         
    }
   
   }
   for(int i = 0; i < n; i++){
    for(int j = 0; j < m ; j++){
     if(mat[i][j] == '.'){
        mat[i][j] = 'X';
     }
         
    }
   
   }

     for(int i = 0; i < n; i++){
    for(int j = 0; j < m ; j++){
     if(mat[i][j] == '*'){
        mat[i][j] = '.';
     }
         
    }
   
   }
      for(int i = 0; i < n; i++){
    for(int j = 0; j < m ; j++){
         cout << mat[i][j];
         
    }
    cout << endl;
   
   }

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