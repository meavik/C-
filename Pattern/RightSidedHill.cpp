#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n,i,j;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    for(i=1; i<=n; i++)
    {
        for(j=i; j<n; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }

    return 0;
}
