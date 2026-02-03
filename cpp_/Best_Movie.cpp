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
   //  cout << 2 * n << endl;
   // string s;
   // cin >> s;
   int mini = 2000;
 while(n--){
     int a , b;
     cin >> a >> b;
     if( a >= 7){
        mini = min(mini, b);
     }
//  }
//    vector<int>v(n);
//    for(int i = 0; i < n; i++){
//     cin >> v[i];
//    }
//    for(int i = 0; i < n; i++){

//    }
   
 
//    cout <<    << endl;
  
}
if(mini == 2000){
    cout << -1 << endl;
}
else{
    cout << mini << endl;
}}

int32_t main() {
      
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
    int t;
    cin >> t;
    while(t--){
        solve();
    }
   //  solve();

   
    
    }