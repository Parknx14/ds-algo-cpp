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
   int n, q;
   cin >> n >> q;
   vector<int>v(n+ 1);

   for(int i = 1; i <= n; i++){
           cin >> v[i];
   }
   
    // deque<int>dq;
    // dq.push_back(v[0]);
    // dq.push_back(v[1]);
    // for(int i = 2; i < n; i++){
    //     if(i % 2 == 0){
    //       if(v[i] >= dq.front()){
    //           dq.push_front(v[i]);
    //       }
    //       else{
    //         dq.push_back(v[i]);
    //       }}
    //       else{
    //         if(v[i] >= dq.front()){
    //             dq.push_back(v[i]);            }
    //             else{
    //                 dq.push_front(v[i]);
    //             }
    //       }
    // // }
    // cout << min(dq.front(), dq.back())<< endl;
    vector<int>a = v;
    sort(a.begin(), a.end());
// int ans = 0;
// for (int i=0; i<(n-1)/2; i++) {
// ans = max(ans, min(v[i], v[n-1-i]));
// }
  int ans = v[1];
        for(int i = 2; i <= n; i++) {
            if(i % 2 == 0) {
                ans= max(ans, v[i]);
            } else {
                ans = min(ans, v[i]);
            }
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

