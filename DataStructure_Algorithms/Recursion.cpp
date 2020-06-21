#include<iostream>
using namespace std;
int fact(int);
int main(void){

    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int x = fact(num);
    cout<<num<<"! = "<<x<<endl;

    return EXIT_SUCCESS;
}

int fact(int num){
    if (num == 0){
        return 1;
    }
    else return num*fact(num-1);
}
