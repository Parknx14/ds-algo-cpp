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





int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
    //     solve();
    // }
    int n;
    cin >> n;

    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 1; i  < n; i++){
         while( i < n && s[i] == s[i-1]){
            cnt++;
            i++;
         }
    }
    cout << cnt << endl;
    
}