/*

   This code belongs to parkxiv*/
 
 
 







#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;

void solve() {
  int  n;
  cin >> n;
     vector<int> v(n);
    vector<int>st;
    vector<bool> mp(n + 1, false);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if (!mp[v[i]]) {
            mp[v[i]] = true;
            st.push_back(v[i]);
        }
    }

    sort(st.begin(), st.end());

    vector<int>d(n + 1, -1);
    queue<int> q;

    for (int x : st) {
        d[x] = 1;
        q.push(x);
    }

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int i = 0; i < (int)st.size(); i++) {
            int val = u * st[i];
            if (val> n){
                 break;
            }
            
            if (d[(int)val] == -1) {
                d[(int)val] = d[u] + 1;
                q.push((int)val);
            }
        }
    }

    for (int i = 1; i <= n; ++i) {
        cout << d[i] << " ";
    }
    cout << endl;

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
