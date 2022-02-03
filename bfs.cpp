// geeks for geeks practise program
class Solution
{
    public:
    vector <int >v;
    vector<int> levelOrder(Node* node)
    {
        if(node == NULL)
        {
            return {};
        }
      queue<Node*> q;
      q.push(node);
      vector<int> ans;
      while(!q.empty())
      {
          Node *temp=q.front();
          q.pop();
          v.push_back(temp->data);
          if(temp->left!=NULL)
          {
              q.push(temp->left);
          }
          if(temp->right!=NULL)
          {
              q.push(temp->right);
          }
      }  
      
      return v;
    }
};


// Leetcode program
/*

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> v;
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        if(root == NULL)
        {
            return {};
        }
        queue <TreeNode*> q;
        int temp;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
           vector <int> ans;
            for(int i=0;i<size;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                ans.push_back(temp->val);
                if(temp->left!=NULL)
                {
                    q.push(temp->left);
                }
                if(temp->right!=NULL)
                {
                    q.push(temp->right);
                }
            }
           v.push_back(ans); 
        }
        return v; 
    }
};

   



*/
