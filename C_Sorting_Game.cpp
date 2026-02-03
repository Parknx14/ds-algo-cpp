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
  cin>> s;
  vector<int>v;
  int one = 0, z = 0;
  for(int i = 0; i < n; i++) {
      if(s[i] == '1') {
        one++;
      }
      else{
        z++;
      }
  }
  int i = 0;
  while(i < z) {
    if(s[i] == '1') {
        v.push_back(i);
    }
    i++;
  }
  int j = z;
  while(j< n) {
    if(s[j] == '0') {
        v.push_back(j);
    } 
    j++;
  }
  if((int)v.size() == 0) {
    cout << "Bob" << endl;
    return;
  }
  cout << "Alice" << endl;
  cout << (int)v.size()  << endl;
  for(int i = 0; i < v.size(); i++) {
    cout << v[i] + 1 << " ";
  }
  cout <<endl;
  
 

  
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
