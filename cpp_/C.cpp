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
//     int a,b,c,d;
//     cin >> a >> b >> c >> d;
//      if( c < a ){
//         cout << "Yes" << endl;
//         return;
//      }
//      if(c== a && d < b){
//         cout << "Yes" << endl;
//         return;
//      }
//      cout << "No" << endl;
//    //  cout << 2 * n << endl;
//    // string s;
//    // cin >> s;

//    // vector<int>v(n);
//    // for(int i = 0; i < n; i++){
//    //  cin >> v[i];
//    // }
//    // for(int i = 0; i < n; i++){

//    // }
// //    map<string, int>m;
// //    while(n--){
// //       string s;
// //       cin >> s;
// //       m[s]++;

// //    }
// //    int maxii = 0;
// //    string ans = 0;
// //    for(auto it : m){
// //         if(it.second > maxii){
// //          ans = it.first;
// //          maxii = it.second;
// //         }
// //    }
// //    cout << ans << endl;

 
    int n;
    cin >> n;
    vector<int>v(n);
 for(int i = 0; i < n; i++){
    cin >> v[i];
   }
   int cnt = 0;
   for(int i = 1; i <= n - 3; i++){
    if(v[i] > v[i-1]){
        cnt++;
    }}
    int a = 0, b = 0;
    for(int i = 1; i< n -1; i++){
         if(v[i] > v[i-1] && v[i] > v[i+1]){
            a++;
         }
         if(v[i] < v[i-1] && v[i] < v[i+1]){
            b++;
         }
    }
     if(cnt == 0  || a == 0 || b ==0){
        cout << 0 << endl;
        return;
     }
     if(cnt == 1 ){
        if(a > 0 && b > 0){
            cout << max(a,b)  << endl;
            return;
        }
        else{
            cout << 0 << endl;
            return;
        }
     }
  cout << max(a,b) +1;
   
  
}

int32_t main() {
      
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
   //  int t;
   //  cin >> t;
   //  while(t--){
   //      solve();
   //  }
    solve();

   //  cout << 100 % 12<< endl;
    
    }