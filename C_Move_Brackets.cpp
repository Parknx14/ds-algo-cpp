/*

   This code belongs to HalfbloodPrince
*/
 
 
 







#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<char>st;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
          if(!st.empty() && st.top() == '(' && s[i] == ')') {
             st.pop();
          }
          else if(st.empty() && s[i] == ')') {
            cnt++;
          }
          else if(s[i] == '(') {
            st.push(s[i]);
          }

          }
          cout << cnt << endl;
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
