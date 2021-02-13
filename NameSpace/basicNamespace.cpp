#include <iostream>
using std::cout;
using std::cin;
using std::endl;

namespace mySpace{
    int a;
    void fun();
    class A{
public:
    void Function();
    };
}
namespace ms = mySpace;
using namespace ms;

void ms::fun(){
    cout<<"This is myspace function"<<endl;
}

void ms::A::Function(){
    cout<<"This is myspace class function"<<endl;
}

int main(){
    a = 10;
    cout<<a<<endl;
    fun();
    A *obj = new A;
    obj->Function();
    delete obj;
    return 0;
}
