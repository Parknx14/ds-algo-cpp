/*

   This code belongs to HalfbloodPrince
*/
 
 
 





#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;


  void solve(){
   int a1, b1, a2, b2;
   cin >> a1 >> b1 >> a2 >> b2;
   if(a1 == a2 && b1 == b2){
    cout << "Yes" << endl;
    return;
   }
   int gold = 5 *a1 + b1;
   int silver = 5 * a2 + b2;
   if(gold >= silver && (gold - silver) % 6 == 0){
    cout << "Yes" << endl;
    return;
   } 
   else{
    cout << "No" << endl;
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

