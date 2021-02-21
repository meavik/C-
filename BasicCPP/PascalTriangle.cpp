#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int i,j,n;
    cout<<"Enter the row number: ";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            cout<<" ";
        }
        int num = 1;
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num = num*(i-j)/(j+1);
        }
        cout<<endl;
    }

    return 0;
}
