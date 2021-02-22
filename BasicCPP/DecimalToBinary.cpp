#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    unsigned long long bin,base;
    int rem,no;
    cout<<"Enter a decimal no: ";
    cin>>no;
    int noTemp = no;
    base = 1, bin = 0;
    while(noTemp!=0){
        rem = noTemp%2;
        noTemp = noTemp/2;
        bin = bin+(rem*base);
        base = base * 10;
    }
    cout<<"Binary equivalent of "<<no<<" is "<<bin<<endl;

    return 0;
}
