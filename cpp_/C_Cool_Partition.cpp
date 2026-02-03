/*
   jai Bajrang Bali
   author : Himanshu Dhruw
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int val = v[0];
    int i = 1, ans = 1;
    unordered_set<int>s;
    s.insert(v[0]);
    while(i < n){
        unordered_set<int>st;
        while(i < n && s.size() > 0){
          
               if(s.count(v[i])){
                s.erase(v[i]);
               }
                 st.insert(v[i]);
                 i++;
        }
        if(s.size() == 0){
            ans++;
        }
        s = st;
       
        
    }
    cout << ans << endl;
    
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    
}
