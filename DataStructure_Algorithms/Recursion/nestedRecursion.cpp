//when a recursive function pass a parameter as a recursive
//call then it is called as a nested recursion
#include <iostream>
using namespace std;

int fun(int);

int main(void)
{

    int x = fun(90);
    cout << x << endl;

    return EXIT_SUCCESS;
}

int fun(int n)
{
    if (n > 100)
    {
        return (n - 10);
    }

    else
    {
        return fun(fun(n + 12));
    }
}
