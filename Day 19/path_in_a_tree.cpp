bool solve(vector<int> &ans, TreeNode<int> *root, int x){
    if(root == NULL) return false;
    if(root->data == x){
        ans.push_back(x);
        return true;
    }
    ans.push_back(root->data);
    if(solve(ans, root->left, x)) return true;
    if(solve(ans, root->right, x)) return true;
    
    ans.pop_back();
    
    return false;
    
}

vector<int> pathInATree(TreeNode<int> *root, int x)
{
    // Write your code here.
    vector<int> ans;
    solve(ans, root, x);
    
    return ans;
}
