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
   string s;
   cin >> s;
   int cnt = 0;
  int rem = 0;
   for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            cnt++;
        }           

}
if(s[0] == '1'){
    rem++;
}
if(s[n-1] == '1'){
    rem++;
}
cout << cnt * 3 - rem << endl;
   
  
  
  
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

