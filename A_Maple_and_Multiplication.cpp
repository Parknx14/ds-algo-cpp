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
   int a, b;
   cin >> a >> b;
//    vector<int>v(n);

//    for(int i = 0; i < n; i++){
//            cin >> v[i];
//    }
if(a == b){
    cout << 0 << endl;
    return;
}
if(a % b == 0){
    cout << 1 << endl;
    return;
}
else if(b % a == 0){
    cout << 1 << endl;
    return;
}
cout << 2<< endl;
   
  
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

