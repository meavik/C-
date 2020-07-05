#include<iostream>
using namespace std;

int& fun(int n){
    return n;
}

int main(void){

    int &a = fun(5);
    cout<<a<<endl; 

    return EXIT_SUCCESS;
}
