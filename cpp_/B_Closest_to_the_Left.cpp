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

  int check(int val, vector<int>&v){
    int i = 0;
    int j = v.size()-1;
   
    while(i < j){
        int m = i + (j-i)/2;
        if(v[m] >= val){
            j = m;
        }
        else{
            i = m + 1;
        }
    }
    return i ;
  }
  void solve(){
   int n, m;
   cin >> n >> m;
   vector<int>a(n);
   // unordered_map<int,int>m;
   // set<int>s;
   // vector<int>a(n);
   // priority_queue<int>pq;

   for(int i = 0; i < n; i++){
      cin >> a[i];
   }
   for(int i = 0; i < m; i++){
       int val;
       cin >> val;
     int ans = check(val, a);
     cout << (ans == -1 ? 0 : ans + 1) << endl;
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

