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
   int n, m;
   cin >> n >> m;
   vector<int>v(n);
   // unordered_map<int,int>m;
   // set<int>s;

   for(int i = 0; i < n; i++){
      cin >> v[i];
   }
   sort(v.begin(), v.end());
   if(m <= v[0]){
    cout << v[n-1] - m << endl;
    return;
   }
   if(m >= v[n-1]){
    cout << m - v[0] << endl;
    return;
   }
int rem = 0;
if(m - v[0] <= v[n-1] - m){
    rem = m - v[0];
    cout << rem + v[n-1] - v[0] << endl;
    return;
}
else{
    rem = v[n-1] - m;
    cout << rem + abs(v[n-1] - v[0]) << endl;
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

