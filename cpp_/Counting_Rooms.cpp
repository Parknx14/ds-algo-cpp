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
void dfs(int i, int j, vector<string>&g) {
    g[i][j] = '#';
   int n = g.size();
   int m = g[0].size();
   for(int k = 0; k < 4; k++) {
    int r = i + dx[k];
    int c = j + dy[k];
    if(r < n && c < m && r >= 0 && c >= 0 && g[r][c] == '.') {
           dfs(r, c, g);
    }
   }
   
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
//   int t;
//   cin >> t;
//   while (t--) {
//     solve();
//   }
int n, m;
cin >> n >> m;
vector<string>g;
while(n--) {
    string s;
    cin >> s;
    g.push_back(s);
}
int cnt = 0;
for(int i = 0; i < g.size(); i++) {
    for(int j = 0; j < g[i].size(); j++) {
        if(g[i][j] == '.') {
           dfs(i, j, g);
           cnt++;
        }
    }
}
cout << cnt << endl;
}
