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
   int n, m;
   cin >> n >> m;
   vector<int>v(n);
   // unordered_map<int,int>m;
   // set<int>s;
   vector<pair<int, int>>ans;
   for(int i = 0; i < n; i++){
      cin >> v[i];
      if(v[i] > m){
        int rem = v[i] - m;
        ans.push_back({ ceil((double)rem/ m), i+1});
      }
   }
   if(ans.size() == 0){
    cout << n << endl;
    return;
   }
   int maxii = 0;
   int idx = 0;
   for(int i = 0; i < ans.size(); i++){
     if(ans[i].first >= maxii){
        maxii = ans[i].first;
        idx = ans[i].second;
     }
   }
   cout << idx << endl;
 
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

