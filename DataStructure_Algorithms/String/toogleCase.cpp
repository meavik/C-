#include<iostream>
using namespace std;

int main(void){

    char A[] = "WeLComE";
    for (size_t i = 0; A[i] != '\0' ; i++)
    {
        if (A[i] >='A' && A[i]<='Z')
        {
            A[i] += 32;
        }
        else if (A[i] >= 'a' && A[i] <= 'z')
        {
            A[i] -= 32;
        }
        
    }

    cout<<A<<endl;

    return EXIT_SUCCESS;
}
