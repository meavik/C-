#include<iostream>
using namespace std;

int main(void){

    char a[] = "observe";
    char b[] = "verbose";
    char h[26]{0};
    int i,j;
    i = j = 0;
    for(;a[i] != '\0'; i++){}
    for(;b[j] != '\0'; j++){}
    int length;
    if(i == j ){
        length = i;
        for(i = 0; a[i] != '\0'; i++){
            h[a[i]-97]++;
        }
        for(j = 0; b[j] != '\0';j++){
            h[b[j]-97]--;
            if(h[b[j]-97]<0){
                cout<<"Not Anagram"<<endl;
                break;
            }
        }
        if(b[j] == '\0'){
            cout<<"Anagram"<<endl;
        }
        
    }
    else{
      cout<<"Not Anagram"<<endl;
      }

    return EXIT_SUCCESS;
}
