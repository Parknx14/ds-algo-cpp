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
   int a, b, c, d , e;
   cin >> a >> b >> c >> d >> e;
    if( b > a && c > a){
        cout << 0 << endl;
        return;
    }
   // unordered_map<int,int>m;
   // set<int>s;

//    for(int i = 0; i < n; i++){
//       cin >> v[i];
//    }
//    for(int i = 0; i < n; i++){
//       cout << 
//    }
//    cout <<
     int ans = 0;
   
     int rem = 0;
    

     
     if(d <= e){
        rem = (a - b + d)/d;
        a -= (a- b + d);
        ans += rem;
        if(a >= c){
 ans += ((a - c) /e);
        }
        
       
     }
     else{
        rem = (a - c + e)/e;
        a -= (a-c + e);
        ans += rem;
        if(a >= b){
     ans += (b  /d);
        }
     }
     cout << ans << endl;}

  



int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
  
    
}

