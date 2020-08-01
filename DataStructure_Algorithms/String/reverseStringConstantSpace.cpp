#include <iostream>
using namespace std;

int main(void)
{

    char a[] = "python";
    int i = 0;
    int j = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    // a[i] = '\0';
    i -= 1;

    while (i > j)
    {
        a[i] = a[i] ^ a[j];
        a[j] = a[i] ^ a[j];
        a[i] = a[i] ^ a[j];
        j++;
        i--;
    }
    
    cout << a << endl;

    return EXIT_SUCCESS;
}
