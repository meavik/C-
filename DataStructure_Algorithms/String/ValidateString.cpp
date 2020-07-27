#include<iostream>
using namespace std;

int valid(char[]);

int main(void){

    char pass[] = "Share8098";

    if (valid(pass))
    {
        cout<<"Valid String"<<endl;
    }
    else
    {
        cout<<"Invalid String"<<endl;
    }
    
    

    return EXIT_SUCCESS;
}

int valid(char pass[]){

    for (size_t i = 0; pass[i] != '\0'; i++)
    {
        if (!(pass[i]>='A' && pass[i] <='Z' ) &&
        !(pass[i] >= 'a' && pass[i] <= 'z')&&
        !(pass[i] >= '0' && pass[i] <= '9'))
        {
            return 0;
        }
        
    }
    
    return 1;
}
