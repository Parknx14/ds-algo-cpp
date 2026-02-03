/*

   This code belongs to parkxiv*/
 
 
 







#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;



// 5 2 -8 1
void solve() {
 int n, m;
cin >> n >> m;

string s, t;
cin >> s >> t;

const int INF = 1e9;
vector<int> dp(2 * (m + 1), INF), ndp(2 * (m + 1), INF);

auto idx = [&](int j, int f) {
    return 2 * j + f;
};

dp[idx(0, 0)] = 0;

for (int i = 0; i < n; i++) {
   ndp.assign(ndp.size(), INF);

    for (int j = 0; j <= m; j++) {
        for (int f = 0; f <= 1; f++) {
            int cur = dp[idx(j, f)];
            if (cur == INF){ 
                continue;
            }

            ndp[idx(j, 1)] = min(ndp[idx(j, 1)], cur + (f == 0));

            if (j < m && s[i] == t[j]) {
                ndp[idx(j + 1, 0)] = min(ndp[idx(j + 1, 0)], cur);
            }
        }
    }

    dp.swap(ndp);
}

int res = min(dp[idx(m, 0)], dp[idx(m, 1)]);

 if(res >= INF) {
    cout << -1 << endl;
    return;
 }
cout << res << endl;

}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  
  }
}
