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
    int n;
    cin >> n;
    
    // int n, m, k;
    // cin >> n >> m >> k;
    vector<int>v(n);
    set<int>s;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        s.insert(v[i]);
    }
    // for(int j = 0; j < n; j++){
    //     cin >> v[j];
    // }
    
    if(s.size() == 1){
        cout << -1 << endl;
        return;
    }
    cout << 2 << endl;
    

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
for(int i = 0; i < vp.size(); i++) {
    long long ans = 0, ans2 = 0, cnt = 0;
    
    for(int j = i; j < vp.size(); j++) {
        cnt++;
        ans += vp[j].second;

        // Apply your formula
        ans2 = (cnt * k - ans);
        maxii = max(maxii, ans2);
    }
}
for(int i = 0; i < vp.size(); i++){
        
        for(int j = 0; j < vp.size(); j++){
           ans = 0;
           ans2 = 0;
       

        cnt = 0;
             
             for(int p = i; p < j; p++){
                   ans += vp[p].second;
              cnt++;
                ans2 +=( (cnt)*k  - (ans));
                 maxii = max(maxii, ans2);
                
             }
             maxii = max(maxii, ans2);
        }}