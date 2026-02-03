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

  int ceil_div(int a, int b) {
    return (a + b - 1) / b;
}
 


void solve() {
    int n;
    cin >> n ;
    vector<int>v(n);
     

    for(int i = 0; i < n; i++){
        cin >> v[i];
        
    }
   
  
 sort(v.begin(), v.end());
 int cnt = 0;
 int var = 0, ans =0;
 for(int i = 0;  i < n; i++){
     while(i < n - 1 && v[i] == v[i+1]){
        i++;
     }
     var = min( 1LL, v[i] - cnt);
     ans += var;
     cnt++;
 }   
 cout << ans << endl;
 
    
   
 
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