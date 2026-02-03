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
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    for(int i = 0; i < n - 1; i++){
        if(abs(v[i] - v[i + 1]) <= 1){
            cout << 0 << endl;
            return;
        }
    }

    if(n <= 2){
        cout << -1 << endl;
        return;
    }

    int ans = INT_MAX;

    for(int i = 0; i < n - 1; i++){
        int mini = min(v[i], v[i+1]) - 1;
        int maxi = max(v[i], v[i+1]) + 1;

  
        for(int j = 0; j < i; j++){
            if(v[j] >= mini && v[j] <= maxi){
        ans = min(ans, i - j);
            }
        }

   
        for(int j = i + 2; j < n; j++){
            if(v[j] >= mini && v[j] <= maxi){
               ans = min(ans, j - (i + 1));
                break; 
            }
        }
    }
    if(ans >= n-2){
        cout << -1 << endl;
        return;
    }

    cout << ((ans == INT_MAX) ? -1 : ans) << endl;
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

