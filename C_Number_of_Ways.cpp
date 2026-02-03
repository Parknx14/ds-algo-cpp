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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
    //     solve();
    // }
    int n;
    cin >> n;
      vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    int prefix[n];
    int suffix[n];
    int s = accumulate(v.begin(), v.end(), 0);
    if(s % 3 != 0){
        cout << 0 << endl;
    }
    else{
    s /= 3;
    int sum = 0;
    int ans = 0;
    for(int i = 0; i < n-1; i++){
        sum += v[i];
        if(sum  == 2 * s){
            ans++;
        }
    }
    cout << ans << endl;

    }
}