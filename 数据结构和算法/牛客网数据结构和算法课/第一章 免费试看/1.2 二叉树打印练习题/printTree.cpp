/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};*/

class TreePrinter {
public:
    vector<vector<int> > printTree(TreeNode* root) {
        // write code here
        vector<vector<int> > result;
        result.clear();
        vector<int> line;
        line.clear();
        if(NULL == root)
        {
            return result;
        }
        queue<TreeNode *> q;
        TreeNode *last = root;
        TreeNode *nlast = root;
        q.push(root);
        while(!q.empty())
        {
            TreeNode *nowNode = q.front();
            line.push_back(nowNode->val);
            q.pop();
            if(nowNode->left)
            {
                q.push(nowNode->left);
                nlast = nowNode->left;
            }
            
            if(nowNode->right)
            {
                q.push(nowNode->right);
                nlast = nowNode->right;
            }
            
            if(nowNode == last)
            {
                last = nlast;
                result.push_back(line);
                line.clear();
            }
        }      
        return result;
    }
};