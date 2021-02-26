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

/*void CountNode(struct Node*p){
    int countNode=0;
    while(p!=nullptr){
        countNode++;
        p=p->Next;
    }
    cout<<"Number of nodes: "<<countNode<<endl;
}*/

int RecursiveCount(struct Node*p){
    int countNode=0;
    if(p==nullptr){
        return 0;
    }
    return RecursiveCount(p->Next)+1;
}

int main(){

    int a[]{1,8,3,7,6};
    int n = sizeof(a)/sizeof(a[0]);
    CreateNode(a,n);
    RecursiveDisplay(first);
    cout<<endl;
    //ReverseDisplay(first);
    //CountNode(first);
    int NoOfNode = RecursiveCount(first);
    cout<<NoOfNode<<endl;

    return 0;
}
