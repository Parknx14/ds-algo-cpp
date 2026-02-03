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




// void solve() {
//     // int n;
//     // cin >> n;
    
//     // int n, m, k;
//     // cin >> n >> m >> k;
//     // vector<int>v(n);
//     // for(int i = 0; i < n; i++){
//     //     cin >> v[i];
//     // }
//     // for(int j = 0; j < n; j++){
//     //     cin >> v[j];
//     // }
    

// }

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
    //     solve();
    // }

      int up = 0, low = 0;
      string s;
      cin >> s;
      for(int i = 0; i < s.size(); i++){
         if(s[i] >= 'a' && s[i] <= 'z'){
            low++;
         }
         else{
            up++;
         }
      }
      if(low >= up){
        for(int i = 0; i < s.size(); i++){
             if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = (char)(s[i] +32);
             }
        }
      }
      else{
         for(int i = 0; i < s.size(); i++){
             if(s[i] >= 'a' && s[i] <= 'z'){
                s[i] = (char)(s[i] -32);
             }
        }
      }
      cout << s << endl;

}