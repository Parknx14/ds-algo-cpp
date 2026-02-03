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
std::vector<int> sieve_of_eratosthenes(int n) {
    std::vector<bool> is_prime(n + 1, true);
    std::vector<int> primes;

    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}

  


 void solve(){
    int n,k;
    cin >> n >> k;
    int num = 100006;
    std::vector<int> primes = sieve_of_eratosthenes(num);

   if(k == 1){
       cout << -1 << endl;
       return;
   }
    if(n == 2){
        cout << k << " " << k*2;
        cout << endl;
        return;
    }
    if(n > k){
        cout << -1 << endl;
        return;
    }
    int rem = n - 2;
    int ans = k - rem;


   
 int a = ans;
 int b= ans*2;
    cout << ans << " "<< ans*2 <<  " ";
 int cnt = n-2;
 

        int i = 0;
     while(cnt > 0){
        if(primes[i] == a || primes[i] == b){
            i++;
        }
        while(b % primes[i] == 0){
            i++;
        }
        cout << primes[i]<< " ";
        i++;
        cnt--;
     }
    
    cout << endl;


 

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