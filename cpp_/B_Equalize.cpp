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
  // int a , b c, ;
  // cin >> a >> b >> c;
   
    int n;
    cin >> n;
   //  cout << 2 * n << endl;
   // string s;
   // cin >> s;

   vector<int>v(n);
    set<int>s;
   for(int i = 0; i < n; i++){
    cin >> v[i];
    s.insert(v[i]);
   }
   vector<int>temp;
  for(auto it : s){
    temp.push_back(it);
  }
  sort(temp.begin(), temp.end());
   
 int i = 0;
 int j = 0;
 int maxi = 0;
 while( j < temp.size()){
     while( temp[j] - temp[i] >= n){
                    i++;
     }
    
     maxi = max(maxi, j - i + 1);
     j++;
 }
 cout << maxi << endl;
 
  
  
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