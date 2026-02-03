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
   int l1, b1, l2, b2, l3, b3;
   cin  >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
   vector<pair<int, int>>v(3);
   v.push_back({l1, b1});
    v.push_back({l2, b2});
     v.push_back({l3, b3});
     int maxi = 0;
     for(int i = 0; i < 3; i++){
         if(vp)
     }
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
  int maxi = max(l1, max(l2, max(l3, max(b1, max(b2, b3)))));
  int sum = b1 + b2 + b3;
   if(sum == maxi){
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

