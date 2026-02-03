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
   int x, y , z;
   cin >> x >> y >> z;
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
if(x == 0){
    cout << "Yes" << endl;
    return ;
}
if(z == 0 && x > 0){
    cout << "No" << endl;
    return;
}
 
 if(x - z >= 1 && y > 0){
    cout << "No" << endl;
    return;
 }
 
 else{
    cout << "Yes" << endl;
    return;
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

