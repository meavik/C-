#include<iostream>
using namespace std;

int A[50];

int fib(int);

int main(void){

    int num;
    cout<<"Enter the number: ";
    cin>>num;
    
    for(int i = 0;i<50;i++){
        A[i] = -1;
    }

    int val = fib(num);
    if(val >= 0){
        cout<<"The value at "<<num<<" of Fibonacci series is "<<val<<endl;
    }

    return EXIT_SUCCESS;
    
}

int fib(int num){

    if(num<1){
        cout<<"Error!Couldn't find the value.";
        return -1;
    }
    else if(num<3){
        return num-1;
    }
    if(A[num]!=-1){
        return A[num];
    }
    return fib(num-1)+fib(num-2);

}
