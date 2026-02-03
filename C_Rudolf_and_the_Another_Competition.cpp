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
    int n,m,k;
    cin >> n >> m >> k;
   //  cout << 2 * n << endl;
   // string s;
   // cin >> s;
   n--;
  int ans = 1;
    int cnt = 0;
    vector<int>f(m);
   for(int i = 0; i < m; i++){
        cin >> f[i];
   }
   sort(f.begin(),f.end());
   int sum = k;
   int i =0;
    while(i < f.size() && sum - f[i] >= 0){
        sum -= f[i];
        cnt++;
        i++;
    }
    int pen = 0;
    for(int i = 1; i < f.size(); i++){
         f[i] = f[i-1] + f[i];
    }
    for(int j = 0;j < i; j++){
        pen += f[j];
    }


  
   while(n--){
    vector<int>temp(m);
     for(int i = 0; i < m; i++){
        cin >> temp[i];
     }
     sort(temp.begin(),temp.end());
     int sum = k;
      int num = 0;
      int lag =0 ;
      int i =0;
    while(i < temp.size() && sum - temp[i] >= 0){
        sum -= temp[i];
        num++;
        i++;
    }
     for(int i = 1;i < temp.size(); i++){
             temp[i] = temp[i-1] + temp[i];
     }
     int totalpen = 0;
     for(int j = 0; j< i; j++){
        totalpen += temp[j];
     }
     if(num > cnt){
        ans++;
     }
     if(num == cnt && totalpen < pen){
        ans++;
     }
     
    
   }
   cout << ans << endl;
 

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