#include<iostream>
using namespace std;

size_t sum(int n);

int main(void){

    size_t result = sum(100);
    cout<<result<<endl;
    return EXIT_SUCCESS;
}

size_t sum(int n){

    if( n == 0 ){
        return 0;
    }
    else{
        return sum(n-1) + n;
    }
}
