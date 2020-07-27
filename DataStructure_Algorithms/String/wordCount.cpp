#include<iostream>
using namespace std;

int main(void){

    int word = 0;
    char A[] = "How are you";
    for (size_t i = 0; A[i] != '\0' ; i++)
    {
        if(A[i] ==' ' && A[i-1] != ' '){
            word++;
        }
        
    }

    cout<<"Word: "<<word+1<<endl;

    return EXIT_SUCCESS;
}
