/*

   This code belongs to HalfbloodPrince
*/
 
 
 







#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;

void solve(vector<int>&v, int val) {
     int i = 0;
     int j = v.size() - 1;
     
     while(i <= j) {
        int mid  = i + (j - i)/2;
        if(val >= v[mid]) {
            j = mid - 1;
        }
        else{
            i = mid + 1;
        }
     }
    v[i + 1] = val;
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
  vector<int>ans;
  int round = 0;
  int mini = INT_MAX;
  for(int i = 0; i < n; i++) {
    if(v[i] < mini) {
        round++;
        mini = v[i];
    }
  }
  
 
  cout << round << endl;

}
