#include<iostream>
using namespace std;

struct Array{
    int A[20];
    int length;
    int size;
};

struct Array* arrayIntersection(struct Array*,struct Array*);
void display(const struct Array);

int main(void){

    Array arr1{{2,5,8,10},4,10};
    Array arr2{{2,6,8,12},4,10};
    Array* arr3;
    arr3 = arrayIntersection(&arr1,&arr2);
    display(*arr3);

    return EXIT_SUCCESS;
}

void display(const struct Array arr){
    
    cout<<"Displaying elements: ";
    for (size_t i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
    
}

struct Array* arrayIntersection(struct Array* arr1,struct Array* arr2){

    struct Array*arr3 = new struct Array[20];
    int i,j,k;
    i=j=k=0;

    while(i<arr1->length && j< arr2->length){

        if(arr1->A[i] < arr2->A[j]){
            i++;
        }
        else if(arr2->A[j] < arr1->A[i]){
            j++;
        }
        else if(arr2->A[j] == arr1->A[i]){
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }

    arr3->size = 10;
    arr3->length = k;

    return arr3;
}
