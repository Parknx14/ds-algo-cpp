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
 vector<int> solving(vector<int>a){
          vector<int>ans;
          for(int i = 0; i < 3; i++){
            ans.push_back(a[i]);
          }
          return ans;
 }
  


 void solve(){
    int n;
    cin >> n;
   //  cout << 2 * n << endl;
   vector<int>a(n),b(n),c(n);
   for(int i = 0; i< n; i++){
    cin >> a[i];
   }
   for(int i = 0; i< n; i++){
    cin >> b[i];
   }
   for(int i = 0; i< n; i++){
    cin >> c[i];
   }
 
 sort(a.begin(), a.end(),greater<int>());
 sort(b.begin(),b.end(),greater<int>());
 sort(c.begin(), c.end(),greater<int>());
      vector<int>a1,b1,c1;
      a1 = solving(a);
      b1 = solving(b);
      c1 = solving(c);
    int maxi = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j<3;  j++){
            for(int k = 0; k < 3; k++){
                     if(i != j && j != k && i != k){
                        int ans = a1[i] + b1[j] + c1[k];
                        maxi = max(ans, maxi);
                     }
            }
        }
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