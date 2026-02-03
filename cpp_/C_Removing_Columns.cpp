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


  void solve(){
//    int n;
//    cin >> n;
//    vector<int>v(n);
//    // unordered_map<int,int>m;
//    // set<int>s;

//    for(int i = 0; i < n; i++){
//       cin >> v[i];
//    }
//    for(int i = 0; i < n; i++){
//       cout << 
//    }
//    cout <<
   int n, m; 
   cin >> n >> m;
   vector<vector<char>>v(n , vector<char>(m, 'Z'));
   for(int i = 0; i < n; i++){
    for(int j= 0; j < m; j++){
        cin >> v[i][j];

    }

   }
   int cnt = 0;
 char a = 'a';
 int ans = 0;
   for(int i = 0; i < m; i++){
    cnt= 0;
    a = 'a';
     for(int j = 0; j < n; j++){
         if(v[j][i] >= a){
             a = v[j][i];
         }
         else{
            cnt++;
         }
     }
     if(cnt >= 1){
        ans++;
     }
   }

   cout << ans << endl;
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

