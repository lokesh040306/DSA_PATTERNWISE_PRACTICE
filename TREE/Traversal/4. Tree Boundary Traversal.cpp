/*

class Solution {
    void traverseLeft(Node *root, vector<int> &result) {
        
        // base case
        if((root == NULL) || (root -> left == NULL && root -> right == NULL)) {
            return ;
        }
        
        result.push_back(root -> data);
        
        if(root -> left) {
            traverseLeft(root -> left, result);
        }
        else {
            traverseLeft(root -> right, result);
        }
    }
    
    void traverseLeaf(Node *root, vector<int> &result) {
        
        // base case
        if(root == NULL) {
            return ;
        }
        
        if(root -> left == NULL && root -> right == NULL) {
            result.push_back(root -> data);
        }
        
        traverseLeaf(root -> left, result);
        traverseLeaf(root -> right, result);
    }
    
    void traverseRight(Node *root, vector<int> &result) {
        
        // base case
        if((root == NULL) || (root -> left == NULL && root -> right == NULL)) {
            return ;
        }
        
        if(root -> right) {
            traverseRight(root -> right, result);
        }
        else {
            traverseRight(root -> left, result);
        }
        
        result.push_back(root -> data);
    }
    
  public:
    vector<int> boundaryTraversal(Node *root) {
        
        vector<int> result;
        
        if(root == NULL) return result;
        
        result.push_back(root -> data);
        
        // left boundry nikal ke lao
        traverseLeft(root -> left, result);
        
        // leaf node nikal ke lao
        traverseLeaf(root -> left, result);
        traverseLeaf(root -> right, result);
        
        // right boundry nikal ke lao
        traverseRight(root -> right, result);
        
        return result;
    }
};

*/