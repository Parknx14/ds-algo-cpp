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
   cin >> n >> k;
   vector<int>v(n, 0);
   // unordered_map<int,int>m;
   // set<int>s;
 if( k== n){
     for(int i = 0; i < n; i++){
      cout << 1 ;
   }
   cout << endl;
   return;
 }
 if(k == 0){
     for(int i = 0; i < n; i++){
      cout << 0 ;
   }
   cout << endl;
   return;
 }
 if(n < 3){
   int num = k;
   int i = 0;
   while(num--){
    v[i] = 1;
    i++;
   }
   for(int j = 0; j < n; j++){
       cout << v[j] ;
   }
   cout << endl;
   return;

 }
 v[0] = 1;
 k--;

   for(int i = n-2; i >= 0 && k > 0; i--){
         v[i] = 1;
         k--;
    
   }
   for(int i = 0; i < n; i++){
      cout << v[i];
   }
   cout << endl;
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

