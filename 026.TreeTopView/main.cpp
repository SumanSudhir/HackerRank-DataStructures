#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    void topView(Node * root) {

        if(root == NULL){
            return;
        }

        queue<Node*>q;
        queue<int> level;
        map<int,int> m;
        q.push(root);
        level.push(0);

        while(!q.empty()){

            Node* current  = q.front();
            int cur_level = level.front();

            //if contains an element whose key is cur_level then it will return 1
            if(m.count(cur_level) == 0){
                m[cur_level] = current->data;
            }

            if(current->left != NULL){
                q.push(current->left);
                level.push(cur_level - 1);
            }

            if(current->right != NULL){
                q.push(current->right);
                level.push(cur_level + 1);
            }

            level.pop();
            q.pop();

        }

        for(auto i=m.begin();i!=m.end();i++){
            cout<<i->second<<" ";
        }


    }

}; //End of Solution

int main() {

    Solution myTree;
    Node* root = NULL;

    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }

	myTree.topView(root);
    return 0;
}
