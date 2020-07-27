#include<iostream>
using namespace std;

int main(void){

    int Vcount,Ccount;
    Vcount = Ccount = 0;
    char A[] = "How are you";
    for (size_t i = 0; A[i] != '\0' ; i++)
    {
        if (A[i] == 'A'|| A[i] == 'E'|| A[i] == 'I'|| A[i] == 'O'|| A[i] == 'U'||
        A[i] == 'a'|| A[i] == 'e'||A[i] == 'i'||A[i] == 'o'||A[i] == 'u')
        {
            Vcount++;
        }
        else if ((A[i] >= 'a' && A[i] <= 'z') || A[i] >='A' && A[i]<='Z')
        {
            Ccount++;
        }
        
    }

    cout<<"Vowel: "<<Vcount<<endl;
    cout<<"Consonant: "<<Ccount<<endl;

    return EXIT_SUCCESS;
}
