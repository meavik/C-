#include<iostream>
using namespace std;

int pow(int,int);

int main(void){

    int result = pow(2,9);
    cout<<result<<endl;

    return EXIT_SUCCESS;
}

int pow(int m,int n){

    if(n == 0){
        return 1;
    }
    if(n % 2 == 0){
        return pow(m*m,n/2);
    }
    else return m*pow (m*m,(n-1)/2);
}
