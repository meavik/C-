//find the power using recursion
#include<iostream>
using namespace std;

int pow(int ,int);

int main(void){

     int result =  pow(2,3);
    cout<<result<<endl;
    return EXIT_SUCCESS;
}

int pow(int m,int n){

    if(n == 0){
        return 1;
    }
    else{
        return pow(m,n-1)*m;
    }
}
