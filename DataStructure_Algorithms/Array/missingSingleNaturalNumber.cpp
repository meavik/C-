#include<iostream>
using namespace std;

struct Array{
    int *A;
    int length;
    int size;
    
};

int arrayElementInsert(struct Array*,int);
void arrayElementPrint(const struct Array);
void missingSingleNaturalNumber(struct Array);

int main(void){

    Array arr;
    cout<<"Enter the size of the array: ";
    cin >> arr.size;
    arr.length = 0;
    arr.A = new int[arr.size];
    int rec = arrayElementInsert(&arr,arr.size);
    if(rec == -1){
    }
    else{
        arrayElementPrint(arr);
    }
    missingSingleNaturalNumber(arr);

    delete []arr.A;
    arr.A = nullptr;
    return EXIT_SUCCESS;
}

int arrayElementInsert(struct Array *arr, int size)
{
    cout << "How many array elements: ";
    cin >> arr->length;
    if (arr->length > arr->size || arr->length < 0)
    {
        cout << "Invalid array length" << endl;
        return -1;
    }
    else
    {
        cout<<"Enter the natural number: ";
        for (size_t i = 0; i < arr->length; i++)
        {
            cin >> arr->A[i];
        }
    }
    return 0;
}

void arrayElementPrint(const struct Array arr){
    cout<<"Displaying the array elements: ";
    for (size_t i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
    
}

void missingSingleNaturalNumber(struct Array arr){

    int sum = 0;
    for (size_t i = 0; i < arr.length; i++)
    {
        sum += arr.A[i];
    }
    int n = arr.A[arr.length-1];
    int s = n*(n+1)/2;
    cout<<"Missing number is "<<s-sum<<endl;
    
}
