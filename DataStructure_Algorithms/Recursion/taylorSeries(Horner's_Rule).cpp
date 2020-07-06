//Taylor series using Horner's rule
#include<iostream>
using namespace std;

double taylorSeries(int,int);

int main(void){

    double result = taylorSeries(3,10);
    cout<<result<<endl;

    return EXIT_SUCCESS;
}

double taylorSeries(int x, int n){
    static double s = 1;

    if(n == 0){
        return s;
    }
    else{
        s = 1 + s*x/n;
        return taylorSeries(x,n-1);
    }
}
