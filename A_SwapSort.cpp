/*
   jai Bajrang Bali
   author : Himanshu Dhruw
*/
 
 
 /* stuff you should look for
* int overflow, array bounds
* special cases (n=1?)
* do smth instead of nothing and stay organized
* WRITE STUFF DOWN
* DON'T GET STUCK ON ONE APPROACH
*/





#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;


  void solve(){
   int n;
   cin >> n;
   vector<int>v(n);
   // unordered_map<int,int>m;
   // set<int>s;
 for(int i = 0;  i < n; ++i){
    cin >> v[i];
 }
 int cnt = 0;
 vector<pair<int, int>>vp;
 for(int i = 0; i < n; i++){
     int maxi = v[i];
     int pos = -1;
     for(int j = i; j < n; j++){
          if(v[j] < maxi){
            maxi = v[j];
           pos = j;
          }
     }
     if(pos != -1 && pos < n){
        cnt++;
        vp.push_back({i, pos});
     swap(v[i], v[pos]);}
 }
//    for(int i = 0; i < n; i++){
//       int val;
//       cin >> val;
//       v[i] = {val, i};
//    }
//    sort(v.begin(), v.end());
//    int cnt =0;
//    vector<pair<int,int>>ans;
//    vector<int>vis(n, 0);
//    for(int i = 0; i < n; i++){
//        while(v[i].second != i){
//         int idx = v[i].second;
      
//         if(vis[idx] != 1){
//              swap(v[i], v[idx]);
//                vis[idx] =1;
//         cnt++;
//         ans.push_back({i, idx});
//         }
//         else{
//             break;
//         }
       
//        }

//    }
   cout << cnt << endl;
   for(auto it : vp){
    cout << it.first << " "<< it.second<< endl;
   }
//    for(int i = 0; i < n; i++){
//       cout << 
//    }
//    cout <<

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

