#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if(root == NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        int n=1;
        while(n) {
            int cur=-INT_MAX-1;
            int N = 0;
            for(int i=0;i<n;i++) {
                cur = max(cur, q.front()->val);
                if(q.front()->left != NULL) {
                    q.push(q.front()->left);
                    N++;
                }
                if(q.front()->right != NULL) {
                    q.push(q.front()->right);
                    N++;
                }
                q.pop();
            }
            n=N;
            ans.push_back(cur);
        } 
        return ans;  
    }
};