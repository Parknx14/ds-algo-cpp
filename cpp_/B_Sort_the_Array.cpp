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




void solve() {
    int n;
    cin >> n ;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int ans = 0;
    int e = 0;
    int var2 = 0;
    for(int i = 0; i < n; i++){
     
            int var = v[i];

            ans = i;
            if( i < n-1 && v[i] > v[i+1]){
                if(i > 0){
                    var2 = v[i-1];
                }
            while(i < n - 1 && v[i] > v[i+1]){
                i++;
            }
        
              e = i;
            if(i < n - 1){
                if(v[i+1] < var){
                    cout << "no" << endl;
                    return;
                }
                
                  
                    while(i < n-1 && var < v[i+1] && v[i] < v[i+1]){
                        i++;
                    }
                    
                    if(i < n -1){
                        cout << "no" << endl;
                        return;
                    }
                    if(v[n-1] < var2){
                        cout << "no" << endl;
                    }
                 
                else{
                    cout << "yes" << endl;
                    cout << ans + 1 <<  " "<< e + 1;
                    return;
                }
            }
               if(v[n-1] < var2){
                        cout << "no" << endl;
                        return;
                    }
            else{
                 cout << "yes" << endl;
                    cout << ans +1 <<  " "<< e + 1;
                    return;
            }}
            
        
    }
    cout << "yes" << endl;
    cout << 1 << " "<<1 << endl;

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