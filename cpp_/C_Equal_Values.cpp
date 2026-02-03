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
  set<int>s;
   for(int i = 0; i < n; i++){
      cin >> v[i];
      s.insert(v[i]);
   }
   if(s.size() == 1){
    cout << 0 << endl;
    return;
   }
//    for(int i = 0; i < n; i++){
//       cout << 
//    }
//    cout << 

 int cost = INF;
 int i = 0;
 while(i < n){
    int s = i;
     
        while(i < n-1 && v[i] == v[i+1] ){
            i++;
        }
       int len = i - s + 1;
        cost = min(cost, v[s] * (n-len));
      i++;
    }
     
 cout << cost << endl;



  }



int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
  
    
}

