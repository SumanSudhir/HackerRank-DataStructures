#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int d){
        data = d;
        left = NULL;
        right = NULL:
    }
};

Node * insert(Node* root, int data){
    if(root == NULL){
        Node* new_node = new Node(data);
        root = new_node;
    }

    else{
        if(root->data >= data){
            root->left = insert(root->left,data);
        }
        if(root->data < data){
            root->right = insert(root->right,data)
        }
    }

    return root;

}
void inOrder(Node *root) {
    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);

}



int main(){
    int n;
    cin >> n;
    int arr[n];
    Node* root;

    for(int i=0; i<n; i++){
        cin>>a[i];
        root = insert(root,a[i]);
    }

    inOrder(root);

}
