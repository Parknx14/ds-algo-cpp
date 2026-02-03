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
  set<int>s;

   vector<int>v(n);
   for(int i = 0; i < n; i++){
    cin >> v[i];
    s.insert(v[i]);
   }
   if(s.size() == 1){
    cout << "No" << endl;
    return;
   }
   vector<int>temp = v;
   sort(temp.begin(), temp.end());
   int ans = temp[n-1];
   int flag = 0;
   for(int i = 0; i < v.size(); i++){
            if(v[i] == ans){
                flag = i;
                break;
            }
   }
   int flag2 = 0;
   cout << "Yes" << endl;
   for(int  i = 0; i< n; i++){
       if(i == flag){
        cout << 2 <<  " ";
       }
       else{
        cout << 1 <<" ";
       }
   }
   cout << endl;
   return;
 

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