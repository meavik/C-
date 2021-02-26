#include<iostream>
using std::cout;
using std::endl;

struct Node{
    int data;
    struct Node* Next;
}*first=nullptr;

void CreateNode(int a[],int n){
    struct Node *last,*t;
    first = new Node;
    first->data = a[0];
    first->Next=nullptr;
    last = first;
    int i = 1;
    for(;i<n;i++){
        t = new Node;
        t->data = a[i];
        t->Next = nullptr;
        last->Next = t;
        last = t;
    }
}

void RecursiveDisplay(struct Node*p){
    if(p!=nullptr){
        cout<<p->data<<" ";
        RecursiveDisplay(p->Next);
    }
}

void ReverseDisplay(struct Node*p){
    if(p!=nullptr){
        ReverseDisplay(p->Next);
        cout<<p->data<<" ";
    }
}

int main(){

    int a[]{1,8,3,7,6};
    int n = sizeof(a)/sizeof(a[0]);
    CreateNode(a,n);
    RecursiveDisplay(first);
    cout<<endl;
    ReverseDisplay(first);

    return 0;
}
