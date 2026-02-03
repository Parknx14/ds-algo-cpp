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
    // cin >> n >> m >> k;
    // vector<int>v(n);
    // for(int i = 0; i < n; i++){
    //     cin >> v[i];
    // }
    int ans = 2;
    int mini = 0;
    vector<int> v = {1, 1, 0};
    int maxii = 0;
    while(mini< n){
         mini = *min_element(v.begin(), v.end());
           maxii = *max_element(v.begin(), v.end());
        mini = maxii + 1;
         
    }
    cout << ans + 2 << endl;

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