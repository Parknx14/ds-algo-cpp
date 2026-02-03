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
      
    for(int i = 0; i < n; i++){
        cin >> v[i];
    
    }

    vector<int>ans;
    ans.reserve(n);
        for (int x : v){
            if (ans.empty() || ans.back() != x){
                ans.push_back(x);}}
  
   
    int last = -1;
    int cnt = 0;
     for (int it : ans)
            if (it > last + 1) {
             cnt++;
              last = it; }  

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