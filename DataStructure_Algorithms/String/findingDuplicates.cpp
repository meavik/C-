#include<iostream>
using namespace std;

int main(void){

    char a[] = "finding";
    int i,j,count;
    for (i = 0; a[i] != '\0'; i++)
    {
        count = 1;
        if(a[i] != '0'){
        for ( j = i+1;a[j] != '\0' ; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                a[j] = '0';
            }
            
        }
        }
        if(count > 1){
            cout<<a[i]<<" appears "<<count<<" times."<<endl;
        }
        
        
    }
    

    return EXIT_SUCCESS;
}
