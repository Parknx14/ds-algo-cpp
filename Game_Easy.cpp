/*
   jai Bajrang Bali
   author : Himanshu Dhruw
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MIN;
const int MAXN = 2005;

vector<vector<int>> dp(2 * MAXN + 1, vector<int>(MAXN, INF));
vector<vector<int>> dp2(2 * MAXN + 1, vector<int>(MAXN, INF));

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int k = 2 * n;
    sort(v.begin(), v.end(), greater<int>());
    for(int i = 1; i <= n; i++){
   int cnt = 0;
       if(i cnt + v[i] > v[i+1])
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
