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
   int n, j, k;
   cin >> n >> j>> k;
   vector<int>v(n);
   // unordered_map<int,int>m;
   // set<int>s;
   // vector<int>a(n);
   // priority_queue<int>pq;
  
 for(int i = 0; i < n; i++){
    cin >> v[i];
 }
 int val = v[j-1];
 int cnt = 0;
 for(int i = 0; i < n; i++){
     if(v[i] <= val && i != j-1){
        cnt++;
     }
 }

  
    if(cnt == 0 && n - k == n-1){
        cout << "No" << endl;
        return;
    }
  
  cout << "Yes" << endl;
    
  
  
  }



int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
  
    
}

