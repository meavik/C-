#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *left,*right;
};

struct Node* CreateTree(){
    int x;
    scanf("%d",&x);
    struct Node* newNode;
    newNode =(struct Node*)malloc(sizeof(struct Node));
    if(x == -1){
        return 0;
    }
    newNode->data = x;
    printf("Enter the left child of %d : ",x);
    newNode->left = CreateTree();
    printf("Enter the right child of %d  : ",x);
    newNode->right = CreateTree();
    return newNode;
};

void preOrder(struct Node* root){

    if(root==0){return;}
    printf("%d ",root->data);
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(struct Node *root){

    if(root==0){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ",root->data);
}

void InOrder(struct Node* root){
    if(root==0){return;}
    InOrder(root->left);
    printf("%d ",root->data);
    InOrder(root->right);
}

int main(){

    struct Node*root;
    root = 0;
    printf("Enter root node(-1 for no node): ");
    root = CreateTree();
    printf("\nPreOrder Traversal\n");
    preOrder(root);
    printf("\nPostOrder Traversal\n");
    postOrder(root);
    printf("\nInOrder Traversal\n");
    InOrder(root);

    return 0;
}
