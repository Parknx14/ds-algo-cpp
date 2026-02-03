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
    int n, m, k;
    cin >> n >> m >> k;

    int total = n * m;
    if (k == 0) {
        cout << total << endl;
        return;
    }

    int res = total;

    int cols = ceil_div(k, n);
    if (cols <= m - 1) {
        int size = n * cols;
        res = min(res, size);
    }

    int rows = ceil_div(k, m);
    if (rows <= n - 1) {
        int size = m * rows;
        res = min(res, size);
    }

    cout << total - res << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }}

   
