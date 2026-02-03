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
   string s1, s2;
   cin >> s1 >> s2;
//    vector<int>v(n);

//    for(int i = 0; i < n; i++){
//            cin >> v[i];
//    }
string ans = "";
  for(int i = 0; i < s1.size(); i++){
    char a;
       if(s1[i] == s2[i]){
     a = '0';
       }
       else{
        a = '1';
       }
       ans +=  a;
  }
  cout << ans << endl;
   
  
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

