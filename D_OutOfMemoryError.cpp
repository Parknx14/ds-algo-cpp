/*

   This code belongs to parkxiv*/
 
 
 







#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;

void solve() {
    int n, m, h;
    cin>>n >> m >> h;
    vector<int>v(n);
   for(int i = 0; i < n; i++) {
 
      cin >> v[i];
   }
   vector<pair<int, int>>vp;
  
   for(int i = 0; i < m; i++) {
    int a, b;
    
    cin >> a >> b;
    a--;
    vp.push_back({a, b});
   }
    vector<int>temp(n , -1), ans(n , 0);
    int k = 0;
   for(int i = 0; i < m; i++) {
    int l = vp[i].first;
    int r = vp[i].second;
    if(temp[l] != k ) {
        temp[l] = k;
        ans[l] = 0;
    }
    ans[l] +=r;
    if(v[l]  + ans[l] > h) {
        k++;
    }
   }
   vector<int>res(n);
   for(int i = 0; i < n; i++) {
     if(temp[i] == k) {
        res[i] = v[i] + ans[i];
     }
     else{
        res[i] = v[i];
     }
   }
    for (int i = 0; i < n; i++) {
       cout << res[i]  << " ";
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
