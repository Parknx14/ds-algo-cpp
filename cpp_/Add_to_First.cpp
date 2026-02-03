/*

   This code belongs to parkxiv*/
 
 
 







#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;



// 5 2 -8 1
void solve() {
  int n;
  cin >> n;
  vector<int>a(n), b(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
 for(int i = 0; i < n; i++) {
    cin >> b[i];
  }
   for(int i = 0; i < n; i++) {
  if(a[i] > b[i]) {
    cout << "No" << endl;
    return;
  }
  }
  int maxi = 0;
  int flag = true;
  for(int i = 0; i < n; i++) {
      if (a[i] < b[i]) {
            if (a[i] <= maxi) {
                flag = false;
                break;
            }
        }
        if (a[i] > maxi) {
            maxi = a[i];
        }
  }
  if(!flag) {
    cout << "No" << endl;
    return;
  }
  cout << "Yes" << endl;

 
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
