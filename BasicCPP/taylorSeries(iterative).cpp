//taylor series with iterative approach
#include<iostream>
using namespace std;

double taylorSeries(int x, int n);

int main(void){

    double result = taylorSeries(2,10);
    cout<<result<<endl;

    return EXIT_SUCCESS;
}

double taylorSeries(int x, int n){

    static double s = 1;

    for(;n>0;n--){
        s = 1 + s*x/n;
    }
    return s;
}
