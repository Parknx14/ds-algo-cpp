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
 int n, q;
        cin >> n >> q;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
             cin >> b[i];
        }

    
        vector<int> pref(n);
        pref[n - 1] = max( b[n - 1], a[n -1] );
        for (int i = n - 2; i >= 0; i--) {
            if(a[i] > pref[i + 1]) {
                pref[i] = max(a[i], b[i]);
                continue;
            }
            pref[i] = max(b[i], pref[i + 1]);
        }
    


        
        vector<int> ans(n, 0);
        ans[0] = pref[0];
        for (int i = 1; i < n; i++) {
            ans[i] = ans[i-1] + pref[i];
        }

       for(int i = 0; i < q; i++) {
            int l, r;
            cin >> l >> r;
            l--; r--;
            cout << ans[r] - (( l - 1>= 0) ?ans[l - 1] : 0 ) << " ";
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