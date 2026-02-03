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
   
    string s;
    cin >> s;
    int ans = 0;
    for(int i = 0; i < 4; i++){
        int num = s[i] -'0';
        ans = (ans *10) + num;
    }
    int r = sqrt(ans);
    if(r * r != ans){
        cout << -1 << endl;
        return;
    }
    cout << 0 << " "<< r << endl;

   
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