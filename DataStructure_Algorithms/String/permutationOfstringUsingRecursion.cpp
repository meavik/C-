#include<iostream>
using namespace std;

void perm(char[],int);

int main(void){

    char a[] = " ";
    perm(a,0);
    return EXIT_SUCCESS;
}

void perm(char a[],int k){
    static char res[10];
    static int A[10]{0};
    static int count = 0;
    if(a[k] == '\0'){
        res[k] = '\0';
        cout<<res<<endl;
    }
    else
    {
        for(; a[i] != '\0'; i++){
            if(A[i] == 0){
                res[k] = a[i];
                A[i] = 1;
                perm(a,k+1);
                A[i] = 0;
            }
        }
    }
    
}
