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
long long lcm(long long a, long long b) {
    return a / __gcd(a, b) * b;
}

  void solve(){
   int x, y;
   cin >> x >> y;
//    vector<int>v(n);
//    // unordered_map<int,int>m;
//    // set<int>s;
//    // vector<int>a(n);
//    // priority_queue<int>pq;

//    for(int i = 0; i < n; i++){
//       cin >> v[i];
//    }
//    for(int i = 0; i < n; i++){
//       cout << 
//    }
  if (__gcd(x, y) > 1){
            cout << 0 << endl;
   } else if (__gcd(x + 1, y) > 1 || __gcd(x, y + 1) > 1){
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
 
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

