#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int n,i,j;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"  ";
        }
        for(j=i;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
