/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/
#include <climits>
    int minValue(Node* root){
        if(root == NULL){
            return INT_MAX;
        }

        int rootValue = root->data;
        int lValue = minValue(root->left);
        int rValue = minValue(root->right);

        if(lValue < rootValue)
            rootValue = lValue;
        if(rValue < rootValue)
            rootValue = rValue;

        return rootValue;
    }

    int maxValue(Node* root){
        if(root == NULL){
            return INT_MIN;
        }

        int rootValue = root->data;
        int lValue = maxValue(root->left);
        int rValue = maxValue(root->right);

        if(lValue > rootValue)
            rootValue = lValue;
        if(rValue > rootValue)
            rootValue = rValue;

        return rootValue;
    }



	bool checkBST(Node* root) {
        if(root == NULL){
            return 1;
        }

        if((root->left != NULL) && (maxValue(root->left) >= root->data)) {
            return 0;
        }

        if((root->right != NULL) && (minValue(root->right) <= root->data)){
            return 0;
        }

        if(!checkBST(root->left) || !checkBST(root->right)){
            return 0;
        }

        return 1;
	}
