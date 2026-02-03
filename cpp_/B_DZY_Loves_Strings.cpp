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
    // int n, m, k;
    // cin >> n >> m >> k;
    // vector<int>v(n);
    // for(int i = 0; i < n; i++){
    //     cin >> v[i];
    // }
    // for(int j = 0; j < n; j++){
    //     cin >> v[j];
    // }
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<int>v(26);
    int maxii = 0;
    for(int i = 0; i < 26; i++){
       cin >> v[i];
       maxii = max(maxii, v[i]);
    }
    int ans = 0;
    for(int i = 0; i < s.size(); i++){
         ans += (v[s[i] - 'a']) * (i+1);
    }
    int len = s.size() + 1;
    while(n--){
        ans += len * maxii;
        len++;
    }
    cout << ans << endl;

    
    

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