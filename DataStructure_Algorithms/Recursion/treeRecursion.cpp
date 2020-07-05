//when there is more than one recursive call in a function then it is called as a tree recursion
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
        fun(n-1);
    }

}
