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
   int n;
   cin >> n;
   vector<int>v(n);
   // unordered_map<int,int>m;
   // set<int>s;
   // vector<int>a(n);
   // priority_queue<int>pq;
  
 for(int i = 0; i < n; i++){
    cin >> v[i];
   }
   int ans = 0;
   int maxi = *max_element(v.begin(), v.end());
    for(int i = 1; i <= maxi; i++){
        int cnt = 0;
        for(int j = 0;j < n; j++){
             if(v[j] > i){
        cnt += i;
             }
             else{
                cnt += v[j];
             }
        }
        int total = i * n;
        ans = max(( cnt* 50) -(total * 30 ), ans);
    }
    cout << ans << endl;
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

