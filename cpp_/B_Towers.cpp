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
   int n, k;
   cin >> n >> k;
unordered_map<int,int>m;
   vector<pair<int,int>>v(n);
   // unordered_map<int,int>m;
   // set<int>s;
  
   for(int i = 0; i < n; i++){
    int val;
      cin >> val;
      v[i] = {val, i+1};
   }
   sort(v.begin(), v.end(), greater<pair<int,int>>());
  int diff = v[0].first - v[n-1].first ;
   int cnt = 0;
   vector<pair<int,int>>ans;
  while (k > 0) {
     sort(v.begin(), v.end(), greater<pair<int,int>>());
    
    int p1 = v[0].second;
    int p2 = v[n-1].second;

     diff = v[0].first - v[n-1].first;
    if (diff <= 1) break; 


    v[0].first--;
    v[n-1].first++;
    ans.push_back({p1, p2});
    cnt++;
    k--;
}

    
   
    
   
   cout << diff << " "<< cnt << endl;
    
   for(auto it : ans){
    cout << it.first << " "<< it.second  << endl;
   }


  }



int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
    //     solve();
   //  // }
   //  solve();
  
    cout << 'l' - 'L';
}
a b c d e f g h i j k l   m n o  p q r s
1 2 3 4 5 6 7 8 9 0 11 12 13 14


