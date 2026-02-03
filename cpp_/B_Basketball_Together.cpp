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
    int n, m;
    cin >> n >> m;
    vector<int>v(n);
   for(int i = 0; i < n; i++){
    cin >> v[i];
   }
   sort(v.begin(),v.end(), greater<int>());
   int i = 0;
   int j = n-1;
   int cnt = 0;
    while(i < j){
    int r = ceil((double)m/v[i]);
    if(m % v[i] == 0){
        r++;
    }
    r--;
    if(r >= 0 && j - r >= i ){
        j -= r;
        cnt++;
        
        
    }
    else{
        break;
    }
    
 i++;


   }
   cout << cnt << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();


}