class Solution {
 public:
  int mod = 1e9 + 7;
  int r, c;
  vector<vector<int>> vp;

  pair<int, int> moveNext(int i, int j, int d) {
    while (i < r && j < c && vp[i][j]) {
      if (d == 0) {
        i++;
        d = 1;
      } else {
        j++;
        d = 0;
      }
    }
    if (i >= r || j >= c) {
      return {-1, -1};
    }
    return {i, j};
  }

  int countPaths(vector<vector<int>>& g) {
    vp = g;
    r = g.size();
    c = g[0].size();
    vector<vector<long long>> dp(r, vector<long long>(c, 0));
    dp[0][0] = 1;

    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        if (!dp[i][j]) {
          continue;
        }

        if (j + 1 < c) {
          auto p = solve(i, j + 1, 0);
          if (p.first != -1) {
            dp[p.first][p.second] = (dp[p.first][p.second] + dp[i][j]) % mod;
          }
        }
        if (i + 1 < r) {
          auto p = solve(i + 1, j, 1);
          if (p.first != -1) {
            dp[p.first][p.second] = (dp[p.first][p.second] + dp[i][j]) % mod;
          }
        }
      }
    }
    return dp[r - 1][c - 1];
  }
};
