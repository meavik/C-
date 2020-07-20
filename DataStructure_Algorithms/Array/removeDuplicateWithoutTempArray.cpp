
#include<iostream>
using namespace std;

struct Array{
    int *A;
    int length;
    int size;
};

void arrayElementsInsert(struct Array*,int,int);
void arrayElementsPrint(const struct Array);
void removeDuplicateWithoutTempArray(struct Array*);

int main(void){

    Array mainArray;
    cout <<"Enter the size of the array: ";
    cin >> mainArray.size;
    cout<<"Enter the number of elements: ";
    cin >> mainArray.length;
    arrayElementsInsert(&mainArray,mainArray.length,mainArray.size);
    arrayElementsPrint(mainArray);

    Array B;
    B.A = new int[mainArray.length]{0};
    removeDuplicateWithoutTempArray(&mainArray);
    cout<<"<<<After removing the duplicates>>>"<<endl;
    arrayElementsPrint(mainArray);
    

    delete []mainArray.A;
    delete []B.A;
    mainArray.A = nullptr;
    B.A = nullptr;
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

void removeDuplicateWithoutTempArray(struct Array* arr){

    int i,j;
    i = j = 0;
    while(i<arr->length-1){
        if (arr->A[i] != arr->A[i+1])
        {
            arr->A[j] = arr->A[i];
            j++;
        }
        i++;

    }
    arr->A[j] = arr->A[arr->length-1];
    arr->length = arr->size = j+1;

}
