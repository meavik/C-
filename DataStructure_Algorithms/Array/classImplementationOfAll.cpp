#include<iostream>
using namespace std;

template <typename T>
class Array{
private:
    T *A;
    int length;
    int size;
public:
    Array()
    :A{new T[10]},length{0},size{10}
    {
        cout<<"OK"<<endl;
    }
    Array(int size)
    :size(size),A{new T[size]},length{0}
    {}
    bool ArrayInitializer();
    void printArray();
    int BinarySearch(T);
    void getIndexValue(int);
    void setIndexValue(int,int);

    ~Array(){
        delete[] A;
    }
};

template<typename T>
bool Array<T>::ArrayInitializer(){
    cout<<"Enter the number of elements: ";
    cin>>length;
    if(length>size){
        cout<<"Array elements can not be more than array size."<<endl;
        return false;
    }
    else
    {
        cout << "Enter the array elements: " << endl;
        for (unsigned i = 0; i < length; i++)
        {
            cin >> A[i];
        }
    }
    return true;
}

template<typename T>
void Array<T>::printArray(){
    cout<<"Printing the array elements: ";
    for (size_t i = 0; i < length; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    
}

template<typename T>
int Array<T>::BinarySearch(T valueToFind){
    int high,low,mid;
    low = 0;
    high = length-1;
    while(high>=low){
        mid = (high+low)/2;
        if(valueToFind == A[mid]){
            return mid;
        }
        else if(valueToFind < A[mid]){
            high = mid -1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}

template<typename T>
void Array<T>::getIndexValue(int index){

    if(index >= 0 && index<length){
        cout<<"Value at index "<<index<<" is"<<A[index]<<endl;
    }
    else{
        cout<<"Invalid index!"<<endl;
    }
    
}

template<typename T>
void Array<T>::setIndexValue(int index,int val){
    if(index>=0 && index<length){
        A[index] = val;
    }
    else{
        cout<<"Invalid index!"<<endl;
    }
}

int main(void){

    int size;
    cout<<"Size of the array: ";
    cin >> size;

    Array<int> *A;
    A = new Array<int>(size);
    bool chk;
    chk = A->ArrayInitializer();
    if(chk == true){
        A->printArray();
    }

    int doWhileInitializer;
    do
    {
        int choice;
        int val, index;
        cout<<"------o-------"<<endl;
        cout << "1.Search" << endl;
        cout << "2.Get index value" << endl;
        cout << "3.Set index value" << endl;
        cout << "<<<---Choose an operation--->>>" << endl;
        cin >> choice;
        doWhileInitializer = choice;
        switch (choice)
        {
        case 1:
            cout << "Enter a value to search in the array: " << endl;
            cin >> val;
            index = A->BinarySearch(val);
            if (index == -1)
            {
                cout << "Value not found!" << endl;
            }
            else
            {
                cout << val << " found at " << index << " th index." << endl;
            }
            break;
        case 2:
            cout << "Enter the index number: ";
            cin >> index;
             A->getIndexValue(index);
            break;
        case 3:
            cout <<"Enter the index number you want to modify: ";
            cin >>index;
            cout<<"Enter the value you want: ";
            cin >> val;
            A->setIndexValue(index,val);
            cout<<"After modifying"<<endl;
            A->printArray();
            break;
        default:
            A->printArray();
            break;
        }
    } while (doWhileInitializer < 4 && doWhileInitializer>0);

    delete A;
    return EXIT_SUCCESS;
}
