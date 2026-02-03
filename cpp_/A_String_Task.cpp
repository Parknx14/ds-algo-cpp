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




void solve() {
    // int n, m, k;
    // cin >> n >> m >> k;
    // vector<int>v(n);
    // for(int i = 0; i < n; i++){
    //     cin >> v[i];
    // }
  string s;
  cin >> s;
  string ans = "";
  for(int i=0; i < s.size(); i++){
     if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'A' && s[i]!= 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U'  && s[i] != 'Y' && s[i] != 'y'){
        if(s[i] >= 'A' && s[i] <= 'Z'){

         ans += '.';
         ans += (char)(s[i] + 32);
        }
        else{
            ans += '.';

        ans += s[i];}
     }
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
    // // }
    solve();
    // cout << (char)('A' + 32) << endl;
 
}