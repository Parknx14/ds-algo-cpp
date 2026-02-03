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

  int ceil_div(int a, int b) {
    return (a + b - 1) / b;
}
 


void solve() {
    int n, k;
    cin >> n >> k ;
    string s;
    cin >> s;
    int a = 0, b = 0;
    for(int i = 0; i < n; i++){
         if(s[i] == '1'){
            a++;
         }
         else{
            b++;
         }
    }
    int total = (a/2) + (b/2);
    if(total == k){
        cout << "YES" << endl;
        return;
    }
    if(total > k){
        if(a == 0 || b == 0){
            cout << "NO" << endl;
            return;
        }
   
     a /= 2;
     b /= 2;
     while(a > 0 && b > 0){
         a--;
         b--;
         if(a + b == k){
            cout << "YES" << endl;
            return;
         }
     }
    }
     cout << "NO" << endl;    
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