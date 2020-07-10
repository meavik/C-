//Finding the GCD of two given numbers using recursion(Euclidean Algorithm)

#include<iostream>
using namespace std;

int gcd(int m, int n);

int main(void){

    int result = gcd(130,15);
    cout<<result<<endl;

    return EXIT_SUCCESS;
}

int gcd(int m, int n){

    if(m == n)
        return m;
    else if(m>n)
        return gcd(m-n,n);
    else
        return gcd(m,n-m);
}
