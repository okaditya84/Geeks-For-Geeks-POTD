struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here
        if(node==NULL){
            return 0;
        }
        else{
            int lheight=height(node->left);
            int rheight=height(node->right);
            if(lheight>rheight){
                return lheight+1;
            }
            else{
                return rheight+1;
            }

        }

        
    }
};