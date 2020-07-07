//Fibonacci series
#include<iostream>
using namespace std;
int F[50] ;
int  mfib(int n);
int main(void){

    for (size_t i = 0; i < 50; i++)
    {
        F[i] = -1;
    }
    

    int result = mfib(5);
    if (result>=0){
        cout<<result<<endl;
    }
    

    return EXIT_SUCCESS;
}

int mfib(int n){

    if(n<0){
        cout<<"Invalid term!";
        return -1;
    }
    if(n<2){
        F[n] = n;
        return n;
    }
    else{
        if(F[n-2] == -1){
            F[n-2] = mfib(n-2);
        }
        if(F[n-1] == -1){
            F[n-1] = mfib(n-1);
        }
    }
    return F[n-1] + F[n-2];
}
