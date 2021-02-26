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

void ReverseLinkList(struct Node *p,int n){
    int a[n];
    int i = 0;
    while(p){
        a[i++] = p->data;
        p=p->next;
    }
    i--;
    p = first;
    while(p){
        p->data = a[i--];
        p=p->next;
    }
}

int main(){
    int a[]{1,3,5,7,9};
    int n = sizeof(a)/sizeof(a[0]);
    CreateNode(a,n);
    DisplayNode(first);
    cout<<"After reversing"<<endl;
    ReverseLinkList(first,n);
    DisplayNode(first);

    return 0;
}
