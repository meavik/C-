#include<iostream>
using std::cout;
using std::cin;
using std::endl;

struct Node{
    int data;
    struct Node*prev;
    struct Node*next;
}*head=0,*last=0;

void CreateList(){
    struct Node*temp,*newNode;
    int choice;
    do{
        newNode = new Node;
        cout<<"Enter data; ";
        cin>>newNode->data;
        newNode->next = 0;
        newNode ->prev = 0;
        if(head==0){
            head = temp = last = newNode;
        }
        else{
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
            last = temp;
        }
        cout<<"Do you want to continue?(1): ";
        cin>>choice;
    }while(choice==1);
}

void display(struct Node*p){
    if(p==0){
        cout<<"No data"<<endl;
        return;
    }
    while(p){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}
void RevDisplay(struct Node*p){
    if(p==0){
        cout<<"No data"<<endl;
        return;
    }
    while(p){
        cout<<p->data<<" ";
        p = p->prev;
    }
    cout<<endl;
}

int main(){

    CreateList();
    display(head);
    RevDisplay(last);
    return 0;
}
