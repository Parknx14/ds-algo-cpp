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

   for(int i = 0; i < n; i++){
      cin >> v[i];
   }
   int maxi = 0;
   int pos = -1;
   for(int i = 0; i  < n-1; i++){
     if(v[i+1] < v[i]){
    pos = -1;
        int xori = v[i+1] ^ v[i];
     for(int j = 0; j < 32; j++){
         if((xori & (1 << j)) != 0){
            pos = j;
         }
         v[i+1] = v[i+1] | v[i];
     }
     maxi = max(pos, maxi);
     }
   }
   if(pos == -1){
    cout << 0 << endl;
    return;
   }
   cout << pow(2LL, maxi) << endl;
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

