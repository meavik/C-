#include<iostream>
using namespace std;
int main(void){
    char a[] = "madam";
    int i,j;
    i = j = 0;
    for (; a[i] !='\0'; i++)
    {
    }
    i -= 1;
    for (; i > j; i--,j++)
    {
        if (a[i] != a[j])
        {
            cout<<"Not palindrome"<<endl;
            break;
        }
        
    }

    if (a[i] == a[j])
    {
        cout<<"Palindrome"<<endl;
    }
    
    
    

    return EXIT_SUCCESS;
}
