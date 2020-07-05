//when there is more than one recursive function and one calls the 
//other in a circular manner then it is called an indirect recursion
#include <iostream>
using namespace std;

void funA(int);
void funB(int);

int main(void)
{
    funA(20);

    return EXIT_SUCCESS;
}

void funA(int n){

    if(n>0){
        cout<<n<<" "; 
        funB(n-1);
    }

}

void funB(int n){

    if(n>1){
        cout<<n<<" ";
        funA(n/2);
    }
}
