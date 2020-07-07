//Finding Combination (nCr)

#include<iostream>
using namespace std;

int fact(int);
int Com(int , int);

int main(void){

    int result = Com(5,50);
    if(result == -1){
        cout<<"Math Error!";
    }
    else
    {
        cout<<result<<endl;
    }
    
    
    

    return EXIT_SUCCESS;
}

int fact(int n){
    if(n == 0){
        return 1;
    }

    return n*fact(n-1);

    
}

int Com(int n, int r){
    
    if(r > n){
        
        return -1;
    }
    int num = fact(n);
    int den = fact(r)*fact(n-r);
    return num / den ;

}
