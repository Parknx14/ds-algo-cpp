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
   
    int rem = 50 - a;
    int maxi = 2 * (b + 5);
    int mini = 2 * (b);
    if(rem >= mini && rem <= maxi){
        cout << "Yes" << endl;
        return;
    }
    cout << "No" << endl;
  
  
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

