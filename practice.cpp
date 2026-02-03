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

// int h[10005];
// int n,k;
// int dp[100010];
 struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data){
      val = data;
      left = NULL;
      right = NULL;
    }
 };
  void dfs(TreeNode* root){
    if(!root){
      return;
    }
    cout << root->val ;
    dfs(root->left);
    dfs(root->right);
  }

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    string a;
    vector<string>v;
    while(cin >> a){
    
      v.push_back(a);}
    

     
    
    TreeNode* root = new TreeNode(stoi(v[0]));
    queue<TreeNode*>q;
    q.push(root);
    int i = 1;
    while(!q.empty() && i < v.size()){
      TreeNode* curr = q.front();
      q.pop();
      if(v[i] != "None"){
       curr->left = new TreeNode(stoi(v[i]));
       i++;
         q.push(curr->left);
      }
      if(i < v.size() &&v[i] != "None"){
        curr->right = new TreeNode(stoi(v[i]));
        i++;
        q.push(curr->right);}
        if(v[i] == "None"){
          i++;
        }
    }
    dfs(root);
     
  }


