//Combination using Pascal's triangle
#include<iostream>
using namespace std;
int A[200][100];
unsigned  int Com(int n, int r);

int main(void){

    for (size_t i = 0; i < 200; i++)
    {
       for (size_t j = 0; j < 100; j++)
       {
            A[i][j] = -1;
       }
       
    }
    

    unsigned  int result = Com(200,5);
    if(result == -99){
        cout<<"Math Error!"<<endl;
    }
    else
    {
        cout<<result<<endl;
    }
    
    return EXIT_SUCCESS;
}

unsigned  int Com(int n, int r){

    if(r > n){
        return -99;
    }
    if(r == 0 || n==r){
        return 1;
    }
    else{
        if(A[n-1][r-1] == -1){
             A[n-1][r-1] = Com(n-1,r-1);
    }
        if(A[n-1][r] == -1){
            A[n-1][r] = Com(n-1,r);
    }

    }
    
    
    return A[n-1][r-1]+A[n-1][r];
}
