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
     int n;
     cin >> n;
     vector<int>v(n);
     v[0] = 2;
     v[n-1] =1;
    int cnt = n;
     for(int i = n-2; i > 0; i--){
          v[i] = cnt;
          cnt--; 
     }
     for(int i = 0; i < n; i++){
        cout << v[i]  << " ";
     }
    cout << endl;
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