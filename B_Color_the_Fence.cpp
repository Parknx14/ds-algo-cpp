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
   //  cout << 2 * n << endl;
   // string s;
   // cin >> s;
  if(n == 0){
    cout << -1 << endl;
    return;
  }
   vector<pair<int,int>>v;
   int a;
      int i = 0;
while(cin >> a){
     
      v.push_back({a,i});
      i++;
   }
   
   auto lamda = [](pair<int,int>&p1, pair<int,int>&p2){
      if(p1.first == p2.first){
        return p1.second > p2.second;
      }
      return p1.first < p2.first;
   };
  

   
   sort(v.begin(),v.end(),lamda);
   if(v[0].first > n){
    cout << -1 << endl;
    return;
   }
   int num = n /v[0].first;
   int rem = n% v[0].first;
   vector<int>ans(num,0);
   for(int i = 0; i< num; i++){
    ans[i] = v[0].second+1;
   }

    vector<pair<int,int>>vp = v;
    
   auto lamda2 = [](pair<int,int>&p1, pair<int,int>&p2){
    // if(p1.first == p2.first){
    //   return p1.second > p2.second;
    // }
    return p1.second > p2.second;
 };
    
 sort(vp.begin(),vp.end(),lamda2);
  for(int j = 0;j < ans.size() && rem > 0; j++){
         for(int i = 0; i < vp.size(); i++){
             if((vp[i].second+1) > ans[j]){
                if(rem + v[0].first - vp[i].first >= 0){
                    ans[j] = vp[i].second+1;
                    rem += v[0].first;
                    rem -=  vp[i].first;
                    break;

                }
             }
         }
   }
 for(int i = 0; i < ans.size(); i++){
    cout << ans[i] ;
 }

 

}

int32_t main() {
      
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
   solve();

   
    
    }
// /*
//    jai Bajrang Bali
//    author : Himanshu Dhruw
// */

