#include<iostream>
using namespace std;

struct Node{
    char data;
    struct Node *left,*right;
};

struct Node* CreateTree(){
    char x;
    cin>>x;
    struct Node* newNode = new struct Node;
    if(x == '0'){
        return nullptr;
    }
    newNode->data = x;
    cout<<"Enter the left child of "<<x<<": ";
    newNode->left = CreateTree();
    cout<<"Enter the right child of "<<x<<": ";
    newNode->right = CreateTree();
    return newNode;
};

void preOrder(struct Node* root){

    if(root==nullptr){return;}
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(struct Node *root){

    if(root==nullptr){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void InOrder(struct Node* root){
    if(root==nullptr){return;}
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

int main(){

    struct Node*root;
    root = nullptr;
    cout<<"Enter root node(0 for no node): ";
    root = CreateTree();
    cout<<"\nPreOrder Traversal\n";
    preOrder(root);
    cout<<"\nPostOrder Traversal\n";
    postOrder(root);
    cout<<"\nInOrder Traversal\n";
    InOrder(root);
    cout<<"\nLevelOrder Traversal\n";
    LevelOrder(root);
    return 0;
}
