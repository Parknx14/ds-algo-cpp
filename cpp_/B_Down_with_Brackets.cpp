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

   string s;
   cin >> s;
   int cnt = 0;
   int flag = 0;
   for(int i = 0; i < s.size()-1; i++){
     if(s[i] == '('){
        cnt++;
     }
     else{
        cnt--;
     }
     if(cnt == 0){
        flag = 1;
        break;
     }}
    if(flag == 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

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