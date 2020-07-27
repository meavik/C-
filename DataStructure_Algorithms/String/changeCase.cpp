#include<iostream>
using namespace std;

int main(void){

    char A[] = "WELCOME";
    for (size_t i = 0; A[i] != '\0' ; i++)
    {
        A[i] += 32;
    }

    cout<<A<<endl;

    return EXIT_SUCCESS;
}
