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
   int n,k;
   cin >> n >> k;
   vector<int>a(n) , b(n), v(n);
   // unordered_map<int,int>m;
   // set<int>s;

   for(int i = 0; i < n; i++){
      cin >> a[i];
   }
   for(int i = 0; i < n; i++){
      cin >> b[i];
   }
   v[n-1] = a[n-1];
   int var = a[n-1];
   for(int i = n-2; i >= 0; i--){
         if(a[i] >= var){
            v[i] = a[i];
            var = v[i];
         }
         else{
            v[i] = var;
         }
   }
   int cnt = 0;
//    for(auto it : v){
//     cout << it << " ";
//    }
//    cout << endl;
   for(int i = 0; i < n; i++){
     if(k -1>= v[i] && k  >= b[i]){
        k--;
        cnt++;
     }
   }
   cout << cnt << endl;
   
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

