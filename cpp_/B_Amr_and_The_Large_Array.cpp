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

   for(int i = 0; i < n; i++){
      cin >> v[i];
   }
//    for(int i = 0; i < n; i++){
//       cout << 
//    }
unordered_map<int,pair<int,pair<int,int>>>mp;
unordered_map<int,int>m;
for(int i = 0; i < n; i++){
    m[v[i]]++;
}
int maxi = 0;
for(auto it :m){
    maxi = max(it.second, maxi);
}
 for(auto it : m){
    if(it.second == maxi){
        int f = it.first;
        int s = it.second;
        mp[f] = {s,{-1,-1}};
    }
 }

 for(int i = 0; i < n; i++){
     if(mp.find(v[i]) != mp.end()){
    
    if(mp[v[i]].second.first == -1){
           mp[v[i]].second.first = i+1;
    }
    if(mp[v[i]].first == 1){
        mp[v[i]].second.second = i + 1;
    }
    mp[v[i]].first--;
   
     }

 }

 int mini = INT_MAX;
 pair<int,int>ans;
 for(auto it : mp){
    pair<int,pair<int,int>>p1 = it.second;
      if(p1.second.second - p1.second.first < mini){
           ans = { p1.second.first, p1.second.second };
           mini = p1.second.second - p1.second.first;
           
      }
 }
   cout << ans.first << " "<<ans.second << endl;
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

