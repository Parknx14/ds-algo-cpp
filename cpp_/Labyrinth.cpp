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
char dr[4] = {'U', 'D', 'L', 'R'};
bool dfs(int i, int j, vector<string>&g) {
    if(g[i][j] == 'B') {
        return true;
    }
    g[i][j] = '#';
   int n = g.size();
   int m = g[0].size();
   for(int k = 0; k < 4; k++) {
    int r = i + dx[k];
    int c = j + dy[k];
    if(r < n && c < m && r >= 0 && c >= 0 && g[r][c] != '#') {
           if(dfs(r, c, g)){
            return true;
           }
    }
   }
   return false;
   
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
vector<string>g, ng;
while(n--) {
    string s;
    cin >> s;
    g.push_back(s);
}
int cnt = 0;
bool flag;
queue<pair<int, int>>pq;
ng = g;

for(int i = 0; i < ng.size(); i++) {
    for(int j = 0; j < ng[i].size(); j++) {
        if(ng[i][j] == 'A') {
            g[i][j] = '#';
            pq.push({{i, j}, ""});
        flag =   dfs(i, j, ng);
           break;
        }
    }

}
 vector<vector<char>>ans;
 cout <<( (flag) ? "YES" : "NO"  )<< endl;
 if(flag) {

while(!pq.empty()) {
    auto [r, c] = pq.front();
    pq.pop();
    
    if(g[r][c] == 'B') {
        ans = str;
        break;
    }
  
    for(int j = 0; j < 4; j++) {
        int nr = dx[j] + r;
        int nc = dy[j] + c;
        if(nr < g.size() && nc < g[0].size()    && nr >= 0 && nc >= 0 && (g[nr][nc] == '.' || g[nr][nc] == 'B' )) {
           ans[i][j] = dr[j];
           q.push({nr, nc});
        }
    }
}

 string res = "";
 for(int i = 0; i < ng.size(); i++) {
    for(int j =0 ; j < ng[0].size(); j++) {
        res += 
    }
 }
}


 
}
