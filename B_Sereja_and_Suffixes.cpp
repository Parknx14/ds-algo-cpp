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
   unordered_map<int,int>map;
   // set<int>s;
   // vector<int>a(n);
   // priority_queue<int>pq;
  set<int>s;
 for(int i = 0; i < n; i++){
    cin >> v[i];
    s.insert(v[i]);
    map[v[i]]++;
   }
   int total = s.size();
   
   vector<int>ans(n);
   ans[0] = total;
  for(int i  = 0; i < n; i++){
     if(i > 0){
        map[v[i-1]]--;
        if(map[v[i-1]] <= 0){
            ans[i] = total -1;
            total--;
        }
        else{
            ans[i] = total;
        }
     }
  }
 
//   1 2 3 4 1 2 3 4 100000 99999
  while(m--){
    int val; 
    cin >> val;
    cout << ans[val-1] <<endl;
   
   
  }
    
  
  
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

