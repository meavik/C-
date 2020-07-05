// when the recursive call is at the last statement and after which 
// there is no pending task then it is called a tail recursion

#include <iostream>
using namespace std;

void fun(int);

int main(void)
{
    fun(4);

    return EXIT_SUCCESS;
}

void fun(int n){

    if(n>0){
        cout<<n<<" ";
        fun(n-1);
    }

}
