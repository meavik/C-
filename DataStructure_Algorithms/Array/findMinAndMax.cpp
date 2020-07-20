#include<iostream>
using namespace std;

class Array{
private:
    int *A;
    int arrayLength;
    int arraySize;
public:
    Array()
    :A{new int[10]},arrayLength{0},arraySize{10}
    {}
    Array(int arraySize)
    :A{new int[arraySize]},arraySize{arraySize},arrayLength{0}
    {}
    void setArray(Array*);
    void printArray(const Array);
    void findMinAndMax(const Array);
    ~Array(){
        delete[] A;
    }
};

void Array::setArray(Array* arr){
    cout<<"How many elements: ";
    cin >> arrayLength;
    cout<<"Enter the array elements: ";
    for (size_t i = 0; i < arrayLength; i++)
    {
        cin >> A[i];
    }
    
}

void Array::printArray(const Array arr){
    cout<<"Displaying the array elements: ";
    for (size_t i = 0; i < arrayLength; i++)
    {
        cout << A[i] <<" "; 
    }
    cout<<endl;
    
}

void Array::findMinAndMax(const Array arr){
    int maxNum = A[0];
    int minNum = A[0];
    int i = 1;
    while (i<arrayLength)
    {
        if (A[i]>maxNum)
        {
            maxNum = A[i];
        }
        else if(A[i]<minNum){
            minNum = A[i];
        }
        i++;
    }
    cout<<"Max: "<<maxNum<<endl;
    cout<<"Min: "<<minNum<<endl;
    
}

int main(void){

    Array *p;
    p = new Array(10);
    p->setArray(p);
    p->printArray(*p);
    p->findMinAndMax(*p);

    delete p;
    return EXIT_SUCCESS;
}
