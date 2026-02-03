/*

   This code belongs to HalfbloodPrince
*/
 
 
 





#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;

  
  void solve(){
//    int n;
//    cin >> n;
//    vector<int>v(n);

//    for(int i = 0; i < n; i++){
//            cin >> v[i];
//    }
   vector<vector<char>>v(8, vector<char>(8));
   for(int i = 0; i < 8; i++){

    for(int j = 0; j < 8; j++){
         cin >> v[i][j];
    }
   }
   for(int i = 0; i < 8; i++){
    int cnt1 = 0;
    int cnt2 = 0;
    for(int j = 0; j < 8; j++){
          if(j < 7 && v[i][j]== v[i][j + 1] && v[i][j] == 'B'){
            cout << "NO" << endl;
            return;
          }
          if(v[i][j] == 'B'){
          cnt1++;}
          if(v[i][j] == 'W'){
            cnt2++;
          }
    }
    if(cnt1 != cnt2){
        cout << "NO" << endl;
        return;
    }
   }
   cout << "YES" << endl;
  
  
  
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

