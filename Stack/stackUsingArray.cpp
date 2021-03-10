#include<iostream>
#define N 5
using std::cout;
using std::cin;
using std::endl;

int Stack[N];
int top = -1;

void push()
{
    int val;
    cout<<"Enter value to push in stack: ";
    cin>>val;
    if(top == N-1)
    {
        cout<<"Overflow."<<endl;
    }
    else
    {
        top++;
        Stack[top] = val;
    }
}

void pop()
{
    int item;
    if(top==-1)
    {
        cout<<"Underflow."<<endl;
    }
    else
    {
        item = Stack[top];
        top--;
        cout<<item<<" popped from stack."<<endl;
    }
}

void display()
{
    int i = top;
    if(top==-1)
    {
        cout<<"No data in stack."<<endl;
    }
    else
    {
        cout<<"Displaying data: ";
        while(i>-1)
        {
            cout<<Stack[i]<<" ";
            i--;
        }
        cout<<endl;
    }
}

void peek()
{
    if(top==-1)
    {
        cout<<"No data"<<endl;
    }
    else
    {
        cout<<endl<<"Top value"<<Stack[top]<<endl;
    }
}

int main()
{
    int choice;
    do
    {
        cout<<"1.Push\n2.Pop\n3.Peek\n4.Display\n"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            cout<<"Invalid choice."<<endl;
            break;
        }
    }
    while(choice>0);
    return 0;
}
