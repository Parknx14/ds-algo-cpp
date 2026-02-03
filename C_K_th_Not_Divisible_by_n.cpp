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
   
   //  cout << 2 * n << endl;
   // string s;
   // cin >> s;
 
		int n,k;
		cin>>n>>k;
		int i = 0;
        int j = k * 2;
		while (i <= j)
		{
		  int mid = i + (j - i)/2;
          if(mid - mid/n >= k){
             j = mid-1 ;
		}
        else{
            i = mid + 1;
        }}
		cout<<i<<'\n';}


int32_t main() {
      
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
    int t;
    cin >> t;
    while(t--){
        solve();
    }
   

   
    
    }