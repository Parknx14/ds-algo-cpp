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
   auto lamda = [](pair<int,int>p1, pair<int,int>p2){
           return p1.second /(double)p1.first > p2.second /(double)p2.first;
            
           
   };
  

 sort(vp1.begin(),vp1.end(), lamda);   
 
 int cnt= 0;
  if(vp1[0].second >= d){
    cout << vp1[0].first << endl;
    return;
  }
  cnt = d / vp1[0].second;
  cnt = cnt*vp1[0].first;
  int rem = d % vp1[0].second;
  int mini = INT_MAX;
  
   for(int i = 0; i < n; i++){
       if(vp1[i].second >= rem){
         mini = min(vp1[i].first, mini);
       }
       else{
         int val = vp1[i].first *(ceil((rem / (double)vp1[i].second)));
      mini = min(mini, val);}
   }
  cnt +=   mini;
   cout << cnt << endl;


 

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