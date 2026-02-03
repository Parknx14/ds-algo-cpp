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
     int n, k;
     cin >> n >> k;
     vector<int>v(n);
     for(int i = 0; i < n; i++){
        cin >> v[i];
     }
     for(int i = 0; i < n; i++){
         if(v[i] == 1 && k > 0){
            while(i < n && k--){
                i++;
            }
          
         }
         if(v[i] == 1){
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