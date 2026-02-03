/*

   This code belongs to parkxiv*/
 
 
 







#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;

void solve() {
    int n;
    cin>> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int cnt = 1;
    int ans = 0;
    sort(v.begin(), v.end());
    for(int i = 1; i < n; i++) {
         if(v[i] == v[i-1]) {
            continue;
         }
         if(v[i] == v[i-1] +1 ) {
            cnt++;
         }
         else{
        ans= max(ans, cnt);

        cnt = 1;}
    }
    ans = max(ans, cnt);
    cout << ans << endl;

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
