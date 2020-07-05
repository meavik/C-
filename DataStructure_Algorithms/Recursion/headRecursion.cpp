//when the recursive call is done at the first statement of
//a recursive function then it is called a head recursion

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
        fun(n-1);
        cout<<n<<" ";  
    }

}
