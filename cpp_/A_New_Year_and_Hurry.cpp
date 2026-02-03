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
    int n, k;
    cin >> n >> k;
    int total = (4 * 60)  - k;
    int sum = 0, cnt = 0;
    for(int i = 1; i <= n; i++){
        if(sum + (5*i) <= total){
            sum += 5*i;
            cnt++;
        }
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
    // solve();
     char a = 'c' - 32;
    cout << a << endl;

}