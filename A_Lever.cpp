/*

   This code belongs to HalfbloodPrince
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
   vector<int>a(n), b(n);

   for(int i = 0; i < n; i++){
           cin >> a[i];
   }
  
  for(int i = 0; i < n; i++){
           cin >> b[i];
   }
   int cnt = 0;
   while(true){
  bool flag1 = false, flag2 = false;
  cnt++;
            for (int i = 0; i < n; i++) {
                if (a[i] > b[i]){ 
                    flag1 = true;}}
                    for (int i = 0; i < n; i++) {
                if (b[i] > a[i]){ 
                    flag2 = true;}}
            
            if(flag1){
                for (int i = 0; i < n; i++) {
                if(a[i] > b[i]) { 
                    a[i]--; 
                    break; }}
            }
                if(flag2){
                for (int i = 0; i < n; i++) {
                if(b[i] > a[i]) { 
                    a[i]++; 
                    break; }}
            }
            if (!flag1){
                break;}
        }
   
   cout << cnt << endl;
  

  
  
  
  }



int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
  
    
}

