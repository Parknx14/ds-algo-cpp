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
    int n,k;
    cin >> n >> k;
   //  cout << 2 * n << endl;
   // string s;
   // cin >> s;

   vector<vector<int>>mat(n,vector<int>(k,0));
     for(int i= 0; i < n; i++){
         for(int j = 0; j < k; j++){
             cin >> mat[i][j];
         }
     }
     int sum = 0;
     for(int i = 0; i < mat[0].size(); i++){
        vector<int>temp;
         for(int j = 0; j < mat.size();j++){
          temp.push_back(mat[j][i]);
         }
         sort(temp.begin(),temp.end());
         int prefix = temp[0];
        
         for(int i = 1; i < temp.size(); i++){
           sum += (temp[i]*i) - prefix;
           prefix += temp[i];
         }
     }
 
    cout << sum << endl;

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