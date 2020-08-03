#include<iostream>
using namespace std;

int main(void){

    char a[] = "medical";
    char b[] = "decimal";
    int i,j,x,h,k;
    h = i = j = k = x = 0; 
    for(;a[i] != '\0'; i++){}
    for(;b[j] != '\0'; j++){}

    if(i == j){
        for(i = 0; a[i] != '\0'; i++){
            x = 1;
            x <<= (a[i] - 97);
            h = h|x;
        }
        for(j = 0; b[j] != '\0'; j++){
            x = 1;
            x <<= (b[j] - 97);
            k = k|x;
        }
        if(h == k){
            cout<<"Anagram"<<endl;
        }
        else{
            cout<<"Not Anagram"<<endl;
        }
    }
    else
    {
        cout<<"Not Anagram"<<endl;
    }
    

    return EXIT_SUCCESS;
}
