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

  //  2 3 1 5 2 
  //  1 2 3 4 5   
  //  1 2 3 4 5  
  int maxi = *max_element(v.begin(), v.end());
  int ans = INT_MAX;
  sort(v.begin(), v.end());
  int mid = v[n/2];
     int curr_sum = 0;
  for(int i = 0; i < n; i++) {
   
      
        curr_sum += abs(mid - v[i]);
    
      
  }
  cout << curr_sum << endl;
   // 0 1 2 3 4 5

}
