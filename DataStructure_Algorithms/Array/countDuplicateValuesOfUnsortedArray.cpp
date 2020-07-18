#include<iostream>
using namespace std;

struct Array{
    int *A;
    int length;
    int size;
    
};

int arrayElementInsert(struct Array*,int);
void arrayElementPrint(const struct Array);
void countDuplicateValuesOfUnsortedArray(struct Array);
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
    countDuplicateValuesOfUnsortedArray(arr);

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

void countDuplicateValuesOfUnsortedArray(struct Array arr){
     
     int count;
     for (size_t i = 0; i < arr.length-1; i++)
     {
         count = 1;
         if(arr.A[i] != -1){
             for (size_t j = i+1; j < arr.length; j++)
         {
             if(arr.A[j] == arr.A[i]){
                 count++;
                 arr.A[j] = -1;
             }
         }
         }
         if(count>1){
             cout<<arr.A[i]<<" appears "<<count<<" times."<<endl;
         }
         
     }
     
      
     
}

