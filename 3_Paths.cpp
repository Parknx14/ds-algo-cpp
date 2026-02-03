/*

   This code belongs to HalfBloodPrince
*/
 
 
 







#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
 void solve() {
    int n;
    cin >> n;
    
 
    if (n < 3) {
        cout << -1 << endl;
        return;
    }

    vector<vector<int>> g(n, vector<int>(n, 0));
 for(int i = 0; i < 3; i++) {
    g[0][i] =1 ;}
    for(int i = 1; i < 3; i++) {
    g[1][i] =1 ;
   g[2][i] = 1;

}
   
  

    for (int i = 3; i < n; i++) {
        g[i][2] = 1;
    }
    for (int j = 2; j < n; j++) {
        g[n- 1][j] = 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << g[i][j];
            if(j == n- 1) {
                cout << "";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

 }

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
