#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

void inOrder(Node *root) {
    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);

}

int main(){
    //Taking Input
    int nodes;
    cin>>nodes;

    vector<vector<int>>index(nodes);
    queue<Node*>q;
    Node* root = new Node(1);
    q.push(root);
    for(int i=0;i<nodes;i++){
        index[i].resize(2);
        cin>>index[i][0]>>index[i][1];
        Node* temp = q.front();
        if(index[i][0] != -1){
            Node* new_nodel = new Node(index[i][0]);
            temp->left = new_nodel;
            q.push(new_nodel);
        }
            if(index[i][1] != -1){
            Node* new_noder = new Node(index[i][1]);
            temp->right = new_noder;
            q.push(new_noder);
        }
        q.pop();
    }

    int n_query;
    cin>>n_query;

    vector<int>query(n_query);
    for(int i=0;i<n_query;i++){
        cin>>query[i];
    }

    inOrder(root);

}
