/*
   jai Bajrang Bali
   author : Himanshu Dhruw
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
   vector<int>v(n);
   // unordered_map<int,int>m;
   // set<int>s;
   // vector<int>a(n);
   // priority_queue<int>pq;
  int cnt = 1;
 for(int i = 0; i < n; i++){
     v[i] = cnt;
     cnt++;
   }
   cout << n << endl;
   for(int i = 0; i < n; i++){
    vector<int>temp = v;
 swap(temp[0], temp[i]);
    for(int j = 0; j < n; j++){
        cout <<temp[j] <<  " ";
    }
    cout << endl;
   }
    
  
  
  }



int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
  
    
}

