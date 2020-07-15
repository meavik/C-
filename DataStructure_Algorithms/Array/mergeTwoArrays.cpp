#include<iostream>
using namespace std;

struct Array{
    int A[20];
    int length;
    int size;
};

void display(const struct Array);
struct Array* Merge(struct Array*,struct Array*); 

int main(void){

    struct Array arrA{{4,7,1,3},4,10};
    struct Array arrB{{5,2,1},3,10};
    struct Array *arrC;
    arrC = Merge(&arrA,&arrB);

    display(*arrC);

    return EXIT_SUCCESS;
}

void display( struct Array arr){

    cout << "Displaying the array elements: ";
    for(int i = 0; i < arr.length ; i++){

        cout << arr.A[i] <<" ";
    }
    cout<<endl;

}

struct Array* Merge(struct Array* arrA,struct Array* arrB){

    struct Array *arrC = new struct Array[20];
    int i,j,k;
    i=j=k=0;
    while(i<arrA->length && j<arrB->length){
        if(arrA->A[i]<arrB->A[j]){
            arrC->A[k++] = arrA->A[i++];
        }
        else{
            arrC->A[k++] = arrB->A[j++];
        }
    }
    for(;i<arrA->length;i++){
        arrC->A[k++] = arrA->A[i];
    }
    for(;j<arrA->length;j++){
        arrC->A[k++] = arrA->A[j];
    }
    arrC->length = arrA->length+arrB->length;
    
    return arrC;

}
