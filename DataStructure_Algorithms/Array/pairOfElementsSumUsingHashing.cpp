
#include<iostream>
using namespace std;

struct Array{
    int *A;
    int length;
    int size;
};

void arrayElementsInsert(struct Array*,int,int);
void arrayElementsPrint(const struct Array);
void pairOfElementsSumUsingHashing(struct Array,int);
int findMax(struct Array);

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
    pairOfElementsSumUsingHashing(mainArray,sumVal);


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

void pairOfElementsSumUsingHashing(struct Array arr,int sumVal){

    Array B;
    int maxNum = findMax(arr);
    B.A = new int[maxNum]{0};
    for (size_t i = 0; i < arr.length; i++)
    {
        B.A[arr.A[i]]++;
    }
    for (size_t i = 0; i < B.length; i++)
    {
        if(B.A[sumVal-arr.A[i]]==1){
            cout<<arr.A[i]<<" + "<<sumVal-arr.A[i]<<" = "<<sumVal<<endl;
        }
        B.A[arr.A[i]]++;
    }
    
    

}

int findMax(struct Array arr){

    int maxNum = arr.A[0];
    for (size_t i = 0; i < arr.length; i++)
    {
        if (arr.A[i]>maxNum)
    {
       maxNum = arr.A[i];
    }

    }
    return maxNum;
    
}
