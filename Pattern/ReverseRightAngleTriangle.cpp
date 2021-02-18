#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int i,j,n;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=i;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
