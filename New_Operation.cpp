


/*

   This code belongs to HalfbloodPrince
*/
 
 
 







#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;



void solve(){
    int n;
    cin >> n;
    vector<int>v(n), arr(n);
for (int i = 0; i < n; i++) {
        cin >> arr[i];
}
v = arr;

int mini = 0;
int maxi = 0;
for(int j = 0; j < n - 1; j++) {
    int num = arr[j] + 2 * arr[j + 1];
    mini += num;
    arr[j + 1] = num;
}
for(int j = n - 2; j >= 0; j--) {
    int num = v[j] + v[j+ 1] * 2;
    maxi += num;
    v[j] = num;
}
cout << arr[n - 1] << " "<< v[0] << endl;
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