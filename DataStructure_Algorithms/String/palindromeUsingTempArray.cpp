#include<iostream>
using namespace std;

int main(void){

    char a[] = "madami";
    char b[10];
    int i,j;
    i = j = 0;
    for (; a[i] != '\0'; i++)
    {   
    }
    i -= 1;
    for (j = 0; i >= 0; i--, j++)
    {
        b[j] = a[i];
    }
    b[j] = '\0';
    for (i = 0,j = 0; a[i] != '\0' && b[j] !='\0'; i++,j++)
    {
        if (a[i] != b[j])
        {
            cout<<"Not palindrome."<<endl;
            break;
        }
        
    }
    if(a[i] == b[j]){
        cout<<"Palindrome"<<endl;
    }
    
    
    return EXIT_SUCCESS;
}
