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
   int n;
   cin >> n;
   vector<int>v(n);
    if(n % 2 != 0){
        cout << -1 << endl;
        return;
    }
   int a = 1;
   int b = 2;
    for(int i = 1; i <= n ; i++){
           if(i % 2 == 0){
              cout << a <<  " ";
              a += 2;
           }
           else{
            cout << b << " ";
            b += 2;
           }
    }
    
    cout << endl;
  
  }



int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
    
  
    
}

