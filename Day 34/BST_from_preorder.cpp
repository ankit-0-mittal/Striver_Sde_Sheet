/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class TreeNode{
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        ~TreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };

*************************************************************/

TreeNode<int>* po(vector<int> &preOrder, int si, int ei){
    int rootData = preOrder[si];
    TreeNode<int>* root = new TreeNode<int>(rootData);
    
    int higherElementIndex = -1, lowerElementIndex = -1;
    
    for(int i=si+1;i<=ei;i++){
        if(preOrder[i]>=rootData){
            higherElementIndex = i;
            break;
        }
    }
    for(int i=si+1;i<=ei;i++){
        if(preOrder[i]<rootData){
            lowerElementIndex = i;
            break;
        }
    }
    
    if(higherElementIndex==-1 && lowerElementIndex==-1 ){
        return root;
    }
    else if(higherElementIndex !=-1 && lowerElementIndex==-1){
        root->right = po(preOrder, si+1, ei); 
    }
    else if(higherElementIndex ==-1 && lowerElementIndex!=-1){
        root->left = po(preOrder, si+1, ei);
    }
    else{
        root->left = po(preOrder, lowerElementIndex, higherElementIndex-1);
        root->right = po(preOrder, higherElementIndex, ei);
    }
    return root;
    
}


TreeNode<int>* preOrderTree(vector<int> &preOrder){
    // Write your code here.
    if(preOrder.size()==0){
        return NULL;
    }
    return po(preOrder, 0, preOrder.size()-1);
    
}
