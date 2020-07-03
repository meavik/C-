
#include<iostream>
using namespace std;

class Shape{
private:
    int length;
    int breadth;
public:
    Shape();
    Shape(int l,int b);
    int area();
    void setLength(int l);
    void setBreadth(int b);
    int getLength();
    int getBreadth();
    ~Shape();

};
// Shape::Shape(){length=breadth=1;}
Shape::Shape(int l,int b):length(l),breadth(b){}
int Shape::area(){return length*breadth;}
void Shape::setBreadth(int b){breadth = b;}
void Shape::setLength(int l){length = l;}
int Shape::getBreadth(){return breadth;}
int Shape::getLength(){return length;}
Shape::~Shape(){}


int main(void){

    Shape *p = new Shape(10,20);
    cout<<"Area --> "<<p->area()<<endl;
    p->setLength(20);
    cout<<p->getLength()<<endl;
    cout<<"Area --> "<<p->getBreadth()*p->getLength()<<endl;
    delete p;
    return EXIT_SUCCESS;
}
