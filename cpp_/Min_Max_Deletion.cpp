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
   int n, k;
   cin >> n >>k;
   vector<int>v(n), ans(n-1);
   // unordered_map<int,int>m;
   // set<int>s;

   for(int i = 0; i < n; i++){
      cin >> v[i];
   }
 int temp = 0;
     for(int j = 1; j < n; j++){
        ans[j-1] = min(v[j], v[j-1]);

    }
   while(k--){
    int i, val;
    cin >> i >> val;
    if(i - 1 >= 0){
        mini = min(v, v[i-1])
    } 
  
    cout << ans << endl;
   }
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


2
5n
7n
6no
9no
8no
4
2
