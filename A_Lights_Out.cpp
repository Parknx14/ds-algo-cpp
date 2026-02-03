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





int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
    //     solve();
    // }
    vector<vector<int>>v(3,vector<int>(3,0));
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> v[i][j];
        }
    }
        vector<vector<int>>ans(3,vector<int>(3,1));
       
   int dx[] = {1, -1, 0, 0};
   int dy[] = {0, 0, 1, -1};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
              if(v[i][j] > 0){
                int p = v[i][j] % 2;
                if(p == 1){
                    ans[i][j] = 1 - ans[i][j];
                 for(int k = 0; k < 4; k++){
                     int row = dx[k] + i;
                     int col = dy[k] + j;
                     if(row >=0 && col < 3 && row < 3 && col >= 0 ){
                    ans[row][col] = 1 - ans[row][col];}
                 }
              }
        }
    }}
    
     for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<  ans[i][j];
        }
        cout << endl;
    }


}