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
//    vector<int>v(n);
//    // unordered_map<int,int>m;
//    // set<int>s;

//    for(int i = 0; i < n; i++){
//       cin >> v[i];
//    }
//    for(int i = 0; i < n; i++){
//       cout << 
//    }
//    cout <<
   
    vector<int>v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
    
  }
  sort(v.begin(), v.end());
 
  int cnt = 0;
  
  vector<int>s (v.begin(), v.begin() + n/2);
  vector<int>b (v.begin() + n/2, v.end());
  
  
  int i = 0;
  int j = 0;
  
  while(j < b.size() && i < s.size()){
    if(s[i] * 2 <= b[j]){
        i++;
        j++;
        cnt++;

    }
    else{
        j++;
    }

    
  }
// cout << ans.size()<<endl;
// cout << cnt<<endl;
// cout << num<<endl;

   cout <<   n- cnt  << endl;

  }



int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
  
    
}

// 2
// 5
// 7
// 6
// 9
// 8
// 4
// 2
// 8 9  6 7 5
// 2 4  2