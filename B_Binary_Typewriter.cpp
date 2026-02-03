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
//    //  cout << 2 * n << endl;
//    vector<int>v(n);
//    for(int i = 0; i < n; i++){
//     cin >> v[i];
//    }
string s;
cin >> s;



 
int cnt = 0;
char temp = '0'; // Start in '0' group
int i = 0;
int l = 0;
while (i < n) {
    if (s[i] != temp) {
        cnt++;        // It costs to jump to new group
        temp = s[i];
        l++;  // Switch the current group
    }
    
    // Traverse through the current group
    while (i < n && s[i] == temp) {
        cnt++;        // Count the character (you can remove this line if you only care about jump cost)
        i++;
    }}
  if(l >= 3){
  
  cout << cnt-2 << endl;
  return;
  }
  cout << cnt-1 << endl;

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