#include<iostream>
using namespace std;

int main(void){

    char a[] = "finding";
    int h,x;
    h = x = 0;
    for (int i = 0; a[i] !='\0'; i++)
    {
        x = 1;
        x <<=  a[i] - 97;
        if( (x & h) > 0){
            cout<<a[i]<<" has duplicates."<<endl;
        }
        else{
            h = x|h;
        }
    }
    

    return EXIT_SUCCESS;
}
