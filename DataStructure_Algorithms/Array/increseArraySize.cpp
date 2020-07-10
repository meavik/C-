#include <iostream>
using namespace std;

int main(void)
{

    int *p = new int[5]{1, 2, 3, 4, 5};
    int *q = new int[10]{0};
    
    for (size_t i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }
    delete[] p;
    p = q;
    q = nullptr;
    for (size_t i = 0; i < 10; i++)
    {
        cout << p[i] << " ";
    }
    

    return EXIT_SUCCESS;
}
