#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int year;
    cout<<"Enter a year: ";
    cin>>year;
    if(year%4 == 0){
        if(year%100 == 0){
            if(year%400 ==0){
                cout<<year<<" is leap year"<<endl;
            }
            else{
                cout<<"Not leap year"<<endl;
            }
        }
            else
            {cout<<year<<" is leap year"<<endl;}
    }
    else{
        cout<<"Not leap year."<<endl;
    }
    return 0;
}
