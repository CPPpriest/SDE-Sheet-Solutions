class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
	    return (root == NULL) || inOrder(root->left, root->right);
    }
    
    
    bool inOrder(struct Node* r1, struct Node* r2)
    {
        if( (r1 == NULL) && (r2 == NULL) )
            return true;
        
        if( (r1 != NULL) && (r2 != NULL) )
        {
            return  (r1->data == r2->data) 
                    && 
                    inOrder(r1-> left, r2-> right) 
                    && 
                    inOrder(r1-> right, r2-> left);   
        }
        
        return false;
    }
};
