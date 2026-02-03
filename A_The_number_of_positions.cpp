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


  void solve(){
    int n, a, b;
    cin >> n>> a >> b;
    int rem = n - a;
    if(b >= rem){
        cout << rem  << endl;
        return;
    }
   cout << b + 1<< endl;
   
//    int n;
//    cin >> n;
//    vector<int>v(n);
//    // unordered_map<int,int>m;
//    // set<int>s;
//    // vector<int>a(n);
//    // priority_queue<int>pq;
  
//    for(int i = 0; i < n; i++){
//       cin >> v[i];
   

//    }
//    if((v[0] == 1 && v[1] == 1) || (v[0] == 2 && v[1] == 2)){
//       for(int i = 2; i < n; i++){
//           if(v[])
//       }
//    }
//       for(int i = 0; i < n; i++){
//   int mini = max(v[i] + 1, i);
//             ans = min(ans, mini);
//    }
    
//    cout << ans << endl;
    
  
  
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

