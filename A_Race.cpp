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
   int a, x, y;
   cin >> a >> x >> y;
   int mini = min(abs(a-x), abs(a- y));
  int d = (x+y)/2;
  
  if((a >= x && a <= y) || (a <= x && a >= y)){
    cout << "NO" << endl;
    return;
  }
 
  cout << "YES" <<endl;
  
  
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

