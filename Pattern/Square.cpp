#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int n,i,j;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=1;i<=5;i++){
        for(j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
