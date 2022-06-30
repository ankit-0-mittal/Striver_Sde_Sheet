/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************/
void find(int level,TreeNode<int>*root, vector<int>&ans){
    if(!root) return;
    if(level==ans.size()){
        ans.push_back(root->data);
    }
    find(level+1,root->left,ans);
    find(level+1,root->right,ans);
}
vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    vector<int>ans;
    find(0,root,ans);
    return ans;
}

