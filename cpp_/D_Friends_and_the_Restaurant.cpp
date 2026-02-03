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

   vector<int>a(n);
   for(int i = 0; i < n; i++){
    cin >> a[i];
   }
   vector<int>b(n);
   for(int i = 0; i < n; i++){
    cin >> b[i];
   }
   vector<int>neg;
   vector<int>pos;
   for(int i = 0; i < n; i++){
    
        pos.push_back(b[i]- a[i]);
   }
     int cnt= 0;
 
   int cost = 0;
   int p = 0;
   
    sort(pos.begin(),pos.end(),greater<int>());
    if(pos[n-1] >= 0){
        cout << pos.size()/2 << endl;
        return;
    }
   
    if(pos.size() <= 1){
        cout << 0 << endl;
        return;
    }
    int  i = 0;
    int j = n-1;
  int sum = 0;
    while(i < n){
      
             while(i < j && pos[j] + pos[i] <0){
             
                j--;
             }
       
       if(i >= j){
        break;
       }
     
        cnt++;
         j--;
         i++;
    }
  
      cout << cnt << endl;
   }
//    auto lamda = [&](pair<int,int>&p1, pair<int,int>&p2){
//               if(p1.first == p2.first){

//                 return p1.second > p2.second;
//               }
//               return p1.first < p2.first;
//    };
  
   

 




int32_t main() {
      
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
    int t;
    cin >> t;
    while(t--){
        solve();
    }
   

   
    
    }