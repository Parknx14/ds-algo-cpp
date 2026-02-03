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

  int ceil_div(int a, int b) {
    return (a + b - 1) / b;
}
 


void solve() {
    int n;
    cin >> n;
    vector<int>v(n);
    vector<int>ans(3,0);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        ans[v[i] % 3]++;
       
    }
     if(ans[0] > 0 || (ans[1] > 0 && ans[2] > 0)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
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