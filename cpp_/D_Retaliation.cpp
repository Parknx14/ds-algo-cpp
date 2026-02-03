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
     for(int i = 0; i < n; i++){
        cin >> v[i];
     }
     if(n == 1){
        cout << "YES" << endl;
        return;
     }
     if(n == 2){
        if(v[0] * 2 != v[1] || v[1] * 2 != v[0]){
            cout << "NO" << endl;
            return;
        }
        else{
            cout << "YES" << endl;
            return;
        }
     }
     int maxi=  max(v[1]-v[0], v[0]-v[1]);
     int cnt = maxi;
     for(int i = 1; i< n; i++){
          if(abs(v[i] - v[i-1]) != cnt){
            cout << "NO" << endl;
            return;
          }
     }
     cout << "YES" << endl;
     
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
