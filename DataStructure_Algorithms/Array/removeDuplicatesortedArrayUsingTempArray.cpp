#include<iostream>
using namespace std;

struct Array{
    int *A;
    int length;
    int size;
    
};

int arrayElementInsert(struct Array*,int);
void arrayElementPrint(const struct Array);
void removeDuplicatesortedArrayUsingTempArray(struct Array*,struct Array*);
int findMax(struct Array*);


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
    int maxNum = findMax(&arr);
    
    Array B;
    B.A = new int[maxNum]{0};
    B.length = maxNum;
    B.size = maxNum;

    removeDuplicatesortedArrayUsingTempArray(&arr,&B);
    cout<<"<<<After Removing>>>"<<endl;
    arrayElementPrint(B);
    

    delete []arr.A;
    delete [] B.A;
    B.A = nullptr;
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

int findMax(struct Array* arr){
    int max = arr->A[0];
    for (size_t i = 1; i < arr->length; i++)
    {
        if(arr->A[i] > max)
            max = arr->A[i];
    }
    return max;

}

void removeDuplicatesortedArrayUsingTempArray(struct Array* arr,struct Array* B){

    
    int j = 0;
    for (size_t i = 0; i < arr->length-1; i++)
    {
        if(arr->A[i] != arr->A[i+1]){
            B->A[j] = arr->A[i];
            j++;
        }
    }
    B->A[j] = arr->A[arr->length-1];
 
    B->length = j+1;
    B->size =j+1;
    
}
