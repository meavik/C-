#include<iostream>
#define PI 3.1416
using namespace std;
template <typename T>
struct Shape{

    T length;
    T breadth;
    T radius;
    T rectangleArea(){
        return length * breadth;
    }
    T circleArea(){
        return radius*radius*PI;
    }
};

int main(void){

    Shape <int> r{10,20};
    auto rectangleArea = r.rectangleArea();
    cout<<"Rectangle area->"<<rectangleArea<<endl;
    // Shape <int> c{0,0,5};
    Shape <int> c;
    c.radius = 5;
    int circleArea = c.circleArea();
    cout<<"Area of circle -> "<<circleArea<<endl;
    return EXIT_SUCCESS;
}
