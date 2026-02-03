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
  
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
//   int t;
//   cin >> t;
//   while (t--) {
//     solve();
//   }
 int n;
 cin >> n;
 vector<int>v(n);
 for(int i = 0; i < n; i++) {
    cin >> v[i];
 }

  int sum = 0;
  int maxi = INT_MIN;
  for(int i = 0; i < n; i++) {
     sum += v[i];
  
     maxi = max(maxi, sum);
        if(sum <= 0) {
        sum = 0;
     }
  }
  cout << maxi << endl;
}
