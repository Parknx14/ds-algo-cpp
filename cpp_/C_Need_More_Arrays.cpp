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

  int ceil_div(int a, int b) {
    return (a + b - 1) / b;
}
 


void solve() {
  int n;
      
    cin >> n;
    vector<int>v(n);
        set<int>s;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        s.insert(v[i]);
    }
    int last = -1;
    vector<int>ans;
    for(auto it : s){
        ans.push_back(it);
    }
    int cnt = 0;
    for(int i  =0; i < ans.size(); i++){
         if(ans[i]  > last + 1){
            cnt++;
            last = ans[i] ;
         }
    }
    cout << cnt << endl;
  
   
   

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