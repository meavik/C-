//Taylor series using recursion
#include<iostream>
using namespace std;

double taylorSeries(int,int);

int main(void){

    double result = taylorSeries(2,10);
    cout<<result<<endl;

    return EXIT_SUCCESS;
}

double taylorSeries(int x,int n){
    //here x is the power term and n is the precision
    //(up to how many terms we want to find the values)
    static double p = 1, f = 1;
    double r ;

    if (n == 0){
        return 1;
    }
    else{
        r = taylorSeries(x,n-1);
        p = p * x ;
        f = f * n ;
        return r + (p / f);
    }
}
