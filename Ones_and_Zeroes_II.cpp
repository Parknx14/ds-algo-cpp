/*

   This code belongs to HalfbloodPrince
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
  //    vector<int>v(n);

//    for(int i = 0; i < n; i++){
//            cin >> v[i];
//    }
string s;
cin >> s;
int o = 0, z = 0;

    vector<int> p;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            o++;
            p.push_back(i);
        }
    }

   
    int maxi = min(n, 2 * o);

 
    int swaps = 0;
    int one = 0;
    int zero = 0;
    int used = 0;
int pos = 0;
    for (int i = 0; i < maxi; i++) {
        if (s[i] == '1') {
            one++;
            used++; 
        } else {
            zero++;
        }

       
        if (zero > one) {
       
            if (pos <= i) {
                pos = i + 1LL;
            }
            
         
            while (pos < n && s[pos] == '0') {
                pos++;
            }

            
            swaps += (pos - i);
            
         
            s[pos] = '0';
            s[i] = '1';

         
            one++;
            zero--;
        }
    }

    cout << maxi << " " << swaps << endl;
  
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
