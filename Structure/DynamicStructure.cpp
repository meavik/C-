#include<iostream>
#define PI 3.1416
using namespace std;
template <typename T>
struct Shape{
    T length;
    T breadth;
    T radius;

    T rectArea(){
        return length*breadth;
    }
    T circArea(){
        return radius*radius*PI;
    }
};


int main(void){

    Shape<int> *r = new Shape<int>;
    // Shape<int> *r = new Shape<int>{20,30};
    r->length = 10;
    r->breadth = 20;
    cout<<"Area of rectangle--> "<<r->rectArea()<<endl;

    Shape <int>*c = new Shape<int>;
    c->radius = 5;
    cout<<"Area of circle--> "<<c->circArea()<<endl;

    return EXIT_SUCCESS;
}
