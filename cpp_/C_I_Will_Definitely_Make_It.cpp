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
    int n,k;
    cin >> n >> k;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int ans = v[k-1];
    sort(v.begin(),v.end());
    if(v[n-1] == ans){
 cout << "YES" << endl;
 return;
    }
    int var = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == ans){
            var = i;
            break;
        }
    }
    int h = 0;
    for(int i = var; i < n-1; i++){
        h += abs(v[i] - v[i+1]);
        if(h > v[i]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
