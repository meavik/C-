#include<iostream>
using namespace std;

void TOH(int,char,char,char);

int main(void){

    TOH(4,'A','B','C');

    return EXIT_SUCCESS;
}

void TOH(int n ,char A,char B,char C){

    if(n>0){
        TOH( n-1,A,C,B);
        cout<<"("<<A <<","<<C<<")"<<endl;
        TOH(n-1,B,A,C);
    }
}
