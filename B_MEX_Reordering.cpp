/*

   This code belongs to HalfbloodPrince
*/
 
 
 







#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;

void solve() {
   int n;
   cin >> n;
   vector<int>v(n);
    unordered_map<int, int>mp;  
    vector<int>m(101, -1);

   for(int i = 0; i< n; i++) {
    cin>> v[i];
    mp[v[i]]++;
    m[v[i]]++;
   }
   if(mp.find(0) == mp.end()) {
     cout << "NO" << endl;
     return;
   }
   else if(mp.find(1) == mp.end() ) {
    if(mp.find(0) != mp.end()) {
        if(mp[0] == 1) {
            cout << "YES" << endl;
            return;
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }
   }
   cout << "YES" << endl;
//    if (n == 2) {
//     cout << "YES" << endl;
//     return;
// }
//    int mx  = 101;
//    for(int i = 0; i < 101; i++) {
//     if(m[i] == -1) {
//         mx = i;
//         break;
//     }
//    }
//    for(auto it : mp) {
//     if(it.second < 2 && it.first < mx) {
//         cout << "NO"  << endl;
//         return;
//     }
//    } 
 
 


  
   
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
