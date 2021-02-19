#include<iostream>
using std::cout;
using std::endl;

namespace MySpace{
    int var;
    void fun();
    class MyClass{
    private:
        int var1;
    public:
        MyClass();
        MyClass(int,int);
        void MyFun();
    };
}
using namespace MySpace;
void MySpace::fun(){
    cout<<"Hello from Function"<<endl;
}

void MySpace::MyClass::MyFun(){
    cout<<"Hello from class function."<<endl;
}
MySpace::MyClass::MyClass(){
    cout<<"Default constructor"<<endl;
}
MySpace::MyClass::MyClass(int var1,int var2){
    this->var1 = var1;
    cout<<var1+var2<<endl;
}


int main(){
    var = 10;
    cout<<var<<endl;
    fun();
    MyClass *my = new MyClass();
    MyClass *my1 = new MyClass(10,20);
    my->MyFun();

    delete my1;
    delete my;
    return 0;
}
