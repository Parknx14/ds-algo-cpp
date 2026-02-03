#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;

// Custom hash for pair<int, int>

int dx[] = {1, 1, 1, -1, -1, -1, 0, 0};
int dy[] = {1, 0, -1, 1, 0, -1, 1, -1};


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int n;
    cin >> n;
    unordered_map<int, vector<pair<int,int>>>m;
    while (n--) {
        int x, y, z;
        cin >> x >> y >> z;
        m[x].push_back({y, z});

    }
    int cnt = 0;
    int mini = INT_MAX;
    
    queue<pair<int,int>>q;
    q.push({a,b});
    while(!q.empty()){
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        for(int i = 0; i < 8; i++){
            int r = row + dx[i];
            int c = col + dy[i];
            if(r == c && c == d){
                mini = min(mini, cnt);
            }
            auto it = m.find(r);
            if(it != m.end()){
               for(int i = 0; i < it.size(); i++){
                      if(c >= i.first && i.second ){
                        cnt++;
                      }
               }
            }
        }


    }

   cout << mini;
}
