#include<iostream>
using namespace std;

template <typename T>
class Calc{
    private:
        T first;
        T second;
    public:
        Calc(T first,T second);
        T add();
        T sub();
        T findMax();
        ~Calc();

};

template<typename T>
Calc<T>::Calc(T first,T second):first(first),second(second){}

template<typename T>
T Calc<T>::add(){return first+second;}

template<typename T>
T Calc<T>::sub(){return first - second;}

template<typename T>
T Calc<T>::findMax(){
    return (first>second?first:second);
}

template<typename T>
Calc<T>::~Calc(){}

int main(void){

    Calc <int>*c = new Calc<int>(10,20);
    cout<<"Addition: "<<c->add()<<endl;
    delete c;
    c = nullptr;
    c = new Calc<int>(20,15);
    cout<<"Subtraction: "<<c->sub()<<endl;
    cout<<"Max: "<<c->findMax()<<endl;
    delete c;
    c = nullptr;
    return EXIT_SUCCESS;
}
