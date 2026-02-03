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
    int n, p;
    cin >> n >> p;
   //  cout << 2 * n << endl;
   // string s;
   // cin >> s;

   vector<int>a(n), b(n);
   for(int i = 0; i < n; i++){
    cin >> a[i];
   }
   for(int i = 0; i < n; i++){
    cin >> b[i];
   }
   vector<pair<int,int>>vp;
   for(int i = 0; i < n; i++){
    vp.push_back({a[i],b[i]});
   }
   auto lamda = [](pair<int,int>&p1, pair<int,int>&p2){
     if(p1.second == p2.second){
      return  p1.first > p2.first;
     }
     return p1.second < p2.second;
   };
   sort(vp.begin(),vp.end(), lamda);
   int cnt = 0;
   if(vp[0].second >= p){
    cnt = (p*n);
    cout << cnt << endl;
    return;
 }
 cnt += p;
 int c = n-1;
 int flag = 0;
   for(int i = 0; i< n; i++){
     if(vp[i].second >= p){
        flag = 1;
        break;
     }
     if(vp[i].first <= c){
        cnt += (vp[i].second * vp[i].first);
         c -= vp[i].first;
     }
     else{
        cnt += vp[i].second * c;
        c -= c;
     }
   

     
   }
   if(flag == 1 || c > 0){
     cnt += p *c;
   }
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