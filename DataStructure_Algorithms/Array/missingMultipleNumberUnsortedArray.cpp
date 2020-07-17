#include<iostream>
using namespace std;

struct Array{
    int *A;
    int length;
    int size;
    
};

int arrayElementInsert(struct Array*,int);
void arrayElementPrint(const struct Array);
void missingMultipleNumberUnsortedArray(struct Array);
int findMax(struct Array);
int findMin(struct Array);

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
    missingMultipleNumberUnsortedArray(arr);

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
        cout<<"Enter the array elements: ";
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

void missingMultipleNumberUnsortedArray(struct Array arr){

    Array B;
    int maxVal = findMax(arr);
    int minVal = findMin(arr);
    B.size = maxVal;
    B.length = maxVal;
    B.A = new int[maxVal]{0};
    
    for (size_t i = 0; i < arr.length; i++)
    {
        B.A[arr.A[i]]++;
    }
    cout<<"Printing missing value: ";
    for (size_t i = minVal; i < B.length; i++)
    {
        if(B.A[i]==0){
            cout<< i <<" ";
        }
    }
    cout<<endl;
    
    
}

int findMax(struct Array arr){
    int max = arr.A[0];
    for (size_t i = 1; i < arr.length; i++)
    {
        if(arr.A[i] > max)
            max = arr.A[i];
    }
    return max;
    

}

int findMin(struct Array arr){
    int min = arr.A[0];
    for (size_t i = 1; i < arr.length; i++)
    {
        if(arr.A[i] < min)
            min = arr.A[i];
    }
    return min;
    

}
