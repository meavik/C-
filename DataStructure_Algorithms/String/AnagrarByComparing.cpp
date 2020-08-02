#include<iostream>
using namespace std;

int main(void){

    char a[] = "medical";
    char b[] = "decimal";
    int i,j,length,flag;
    flag = 1;
    i = j = 0;
    for(;a[i] != '\0';i++){}
    for(;b[j] != '\0';j++){}

    if(i == j){
        length = i;
        for(i= 0;a[i] != '\0';i++){
            for(j = 0; b[j] != '\0';){
                if (a[i] != b[j])
                {
                    j++;
                    if (j == length)
                    {
                        flag = 0;
                    }
                    
                }
                else
                {
                    b[j] = '-';
                    break;
                }
                
                
            }
            if (flag == 0)
            {
                cout<<"Not Anagram"<<endl;
                break;
            }
            
        }
    }
    else
    {
        cout<<"Not Anagram"<<endl;
    }
    if(i == length)
    {
        cout<<"Anagram"<<endl;
    }


    return EXIT_SUCCESS;
}
