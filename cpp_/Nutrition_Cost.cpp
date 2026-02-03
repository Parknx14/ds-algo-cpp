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
  
    
    int n,  k;
    cin >> n  >> k;
    vector<int>a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int j = 0; j < n; j++){
        cin >> b[j];
    }
    unordered_map<int,int>m;
    for(int i = 0; i < n; i++){
          if(m.find(a[i]) != m.end()){
                  if(m[a[i]] >= b[i]){
                    m[a[i]] = b[i];
                  }
          }
          else{
            m[a[i]] = b[i];
          }
    }
    priority_queue<int, vector<int>, greater<int>>pq;
    for(auto it : m){
        pq.push( it.second);
    }
    int ans = 0, sum = 0, cnt = 0;
    int maxii = 0;
    while(!pq.empty()){
   cnt++;
   sum += pq.top();
 ans = (cnt* k) - sum;
 maxii = max(maxii, ans);
   pq.pop();
    }
    maxii = max(maxii, ans);

        cout << maxii << endl;
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