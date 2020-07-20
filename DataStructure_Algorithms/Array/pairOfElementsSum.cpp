
#include<iostream>
using namespace std;

struct Array{
    int *A;
    int length;
    int size;
};

void arrayElementsInsert(struct Array*,int,int);
void arrayElementsPrint(const struct Array);
void pairOfElementsSum(struct Array,int);

int main(void){

    Array mainArray;
    cout <<"Enter the size of the array: ";
    cin >> mainArray.size;
    cout<<"Enter the number of elements: ";
    cin >> mainArray.length;
    arrayElementsInsert(&mainArray,mainArray.length,mainArray.size);
    arrayElementsPrint(mainArray);
    cout<<"Enter the sum value: ";
    int sumVal;
    cin >> sumVal;
    pairOfElementsSum(mainArray,sumVal);


    delete []mainArray.A;
    mainArray.A = nullptr;
    return EXIT_SUCCESS;
}

void arrayElementsInsert(struct Array* arr,int length,int size){

    arr->A = new int[size];
    cout<<"Enter the array elements: ";
    for (size_t i = 0; i < length; i++)
    {
        cin >> arr->A[i];
    }
    arr->size = arr->length;

}

void arrayElementsPrint(const struct Array arr){

    cout<<"Displaying the elements: ";
    for (size_t i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout<<endl;
}

void pairOfElementsSum(struct Array arr,int sumVal){

for (size_t i = 0; i < arr.length-1; i++)
{
    for (size_t j = i+1; j < arr.length; j++)
    {
        if(arr.A[i] + arr.A[j] == sumVal){
            cout<< arr.A[i] <<" + " << arr.A[j] <<" = "<<sumVal<<endl;
        }
    }
    
}

}
