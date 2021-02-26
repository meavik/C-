#include<iostream>
using std::cout;
using std::endl;

struct Node{
    int data;
    struct Node *next;
}*first=nullptr;

void CreateNode(int a[],int n){
    struct Node *last,*t;
    first = new Node;
    first->data = a[0];
    first->next=nullptr;
    last = first;
    int i = 1;
    for(;i<n;){
        t = new Node;
        t->data=a[i++];
        t->next = nullptr;
        last->next=t;
        last=t;
    }
}

void DisplayNode(struct Node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

void ReverseLinkListSlidingPionter(struct Node *p){
    struct Node *q,*r;
    q = r = nullptr;
    while(p){
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first=q;
}

int main(){
    int a[]{1,3,5,7,9};
    int n = sizeof(a)/sizeof(a[0]);
    CreateNode(a,n);
    DisplayNode(first);
    cout<<"After reversing"<<endl;
    ReverseLinkListSlidingPionter(first);
    DisplayNode(first);

    return 0;
}
