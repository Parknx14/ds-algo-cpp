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
    int n,d;
    cin >> n >> d;
   //  cout << 2 * n << endl;
   // string s;
   // cin >> s;

   vector<pair<int,int>>vp1;
   for(int i = 0; i < n; i++){
     int a,b;
     cin >> a >> b;
      vp1.push_back({a,b});
   }
   auto lamda = [&](pair<int,int>&p1, pair<int,int>&p2){
           if(p1.second == p2.second){
               return p1.first < p2.first;
           }
           return p1.second > p2.second;
            
           
   };
  
sort(vp1.begin(),vp1.end(),lamda);
   
 
 int cnt= 0;
  vector<pair<int,int>>v;
  v.push_back(vp1[0]);
  
  int mini = 0;
  for(int i = 0; i < vp1.size(); i++){
           if(vp1[i].first == 1){
               mini = max(mini, vp1[i].second);
           }
  }
  v.push_back({1,mini});
   if(v[1].second >= d){
       cout << 1 << endl;
       return;
   }
   if(v[1].second < d && v[0].second >= d){
       cout << 2 << endl;
       return;
   }
  cnt = d / vp1[0].second;
  int ans = cnt*vp1[0].first;
  int rem = d % vp1[0].second;
   if(rem != 0){
       int val =(ceil((double)rem/ v[0].second))* v[0].first;
       int val2 =(ceil((double)rem/ v[1].second))* v[1].first;
              if(val < val2) {
      cout << ans + val << endl;
      return;
  }
  else{
      cout << ans + val2 << endl;
      return;
  }
  
  
}
cout << ans << endl;

 

}

int32_t main() {
      
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
    int t;
    cin >> t;
    while(t--){
        solve();
    }
   

   
    
    }