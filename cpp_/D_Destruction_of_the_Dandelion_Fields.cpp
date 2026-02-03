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
     vector<int>v(n);
     vector<int>odd;
  int flag = 1;
  int sum = 0;
   for(int i = 0; i < n; i++){
           cin >> v[i];
           if(v[i] % 2 != 0){
            odd.push_back(v[i]);
            flag = 0;
           }
           else{
            sum += v[i];
           }
           
   }
   if(flag == 1){
    cout << 0 << endl;
    return;
   }
   sort(odd.begin(), odd.end(), greater<int>());
   int num = ceil(odd.size()/ 2.0);
   for(int j = 0; j < num; j++){
    sum += odd[j];
   }
   cout << sum << endl;

   
 
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
