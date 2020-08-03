#include<iostream>
using namespace std;

void perm(char[],int,int);
void Swap(char*,char*);

int main(void){
    
    char a[] = "abc";
    int i;
    for (i = 0; a[i] != '\0'; i++){}
    perm(a,0,i-1); 
    char x = 'x';
    char y = 'y';
    
    return EXIT_SUCCESS;
}

void perm(char a[],int l,int h){
    int i;
    if(l == h){
        cout<<a<<endl;
    }
    else{
        for(i = l; i<=h; i++){
            Swap(&a[l],&a[i]);
            perm(a,l+1,h);
            Swap(&a[l],&a[i]);
        }
    }
}

void Swap(char *a,char *b){
    
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
