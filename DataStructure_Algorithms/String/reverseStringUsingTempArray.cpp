#include <iostream>
using namespace std;

int main(void)
{

    char a[] = "python";
    char b[7];
    int i = 0;
    int j = 0;
    while (a[i] != '\0')
    {
        i++;
    }

    i -= 1;

    while (i >= 0)
    {
        b[j] = a[i];
        j++;
        i--;
    }
    b[j] = '\0';
    cout << b << endl;

    return EXIT_SUCCESS;
}
