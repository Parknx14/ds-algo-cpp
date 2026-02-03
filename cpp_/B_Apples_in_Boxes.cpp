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
    int n,k;
    cin >> n >> k;
   //  cout << 2 * n << endl;
//    string s;
//    cin >> s;

   vector<int>v(n);
    priority_queue<int>pq;
   for(int i = 0; i < n; i++){
    cin >> v[i];
    pq.push(v[i]);
   }
   vector<int>temp = v;
   sort(v.begin(),v.end());
    if((v[n-1]-1) - v[0] > k){
        cout << "Jerry" << endl;
        return;
    }
    int flag = 1;
    int tem = 0;
    while(!pq.empty()){
               if(pq.top() == 1){
                break;
               }
        if(pq.top() % 2 == 0 && flag == 1){
                flag = 0;
                 tem = pq.top();
               tem -= (tem-1);
               pq.pop();
               pq.push(tem);
        }
        else if(pq.top() % 2 != 0 && flag == 1){
          flag = 1;
          tem = pq.top();
          tem -= (tem-1);
          pq.pop();
          pq.push(tem);
        }
        else if(pq.top()% 2 == 0 && flag == 0){
              flag = 1;
              tem = pq.top();
              tem -= (tem-1);
              pq.pop();
              pq.push(tem);
        }
        else if(pq.top()% 2 != 0 && flag == 0){
            flag = 0;
            tem = pq.top();
            tem -= (tem-1);
            pq.pop();
            pq.push(tem);
        }
        
      
    }
    vector<int>st;
    while(!pq.empty()){
        st.push_back(pq.top());
        pq.pop();
    }
    if(st.size() % 2 == 0 && flag == 1){
            cout << "Jerry" << endl;
            return;
    }
    else if(st.size() % 2 == 0 && flag == 0){
        cout << "Tom" << endl;
        return;
    }
    else if(st.size() % 2 != 0 && flag == 1){
        cout << "Tom" << endl;
        return;
    }
    else if(st.size() % 2 != 0 && flag == 0){
        cout << "Jerry" << endl;
        return;
    }
  

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