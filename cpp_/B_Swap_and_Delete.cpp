/*
        jai Bajrang Bali
         author : parknx
*/



#include <bits/stdc++.h>
#define int long long int 
using namespace std;
   
int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int zero = 0;
        int one = 0;
        for(int i = 0; i < s.size(); i++){
              if(s[i] == '0'){
                zero++;
              }
              else{
                one++;
              }
        }
         
         if(zero == one){
            cout << 0 << endl;
            continue;
         }
         int n = s.size();
         int ans = 0;
        for(int i = 0; i < n; i++){
             if(s[i] == '0'){
                if(one > 0){
                    one--;
                }
                else{
                    ans = i;
                    break;
                }
             }
             else{
                if(zero > 0){
                    zero--;
                }
                else{
                    ans = i;
                    break;
                }
             }
        }
        cout << n - ans << endl;
    }
}



