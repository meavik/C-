#include<iostream>
using namespace std;

int main(void){

    char a[] = "painter";
    char b[] = "painting";

    int i,j;

   for ( i = 0,j = 0; a[i] != '\0' && b[j] != '\0'; i++,j++)
   {
       if(a[i] != b[j]){
           break;
       }
   }
   if(a[i] == b[j]){
       cout<<"Same string"<<endl;
   }
   else if(a[i] > b[j]){
       cout<<b<<" comes first in dictionary than "<<a<<endl;
   }
   else if(a[i] < b[j]){
       cout<<a<<" comes first in dictionary than "<<b<<endl;
   }
    return  EXIT_SUCCESS;
}
