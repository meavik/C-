#include<iostream>
using namespace std;

void display(struct Array);
void swapArray(int*,int*);
void rearrangeArray(struct Array*);

struct Array{
    int *A;
    int size;
    int length;
};

int main(void){

    Array a;
    cout << "Enter the size of the array: ";
    cin >> a.size;

    a.A = new int[a.size];
    a.length = 0;
    int n;
    cout<<"Enter the number of elements: ";
    cin >> n;
    if(a.size>=n){
        for(int i = 0; i < n; i++){
        cin >> a.A[i];
    }
    }
    else{
        cout<<"Length can't be greater than size."<<endl;
        return EXIT_SUCCESS;
    }
    a.length = n;
    display(a);
    rearrangeArray(&a);
    cout<<"<---After rearranging--->"<<endl;
    display(a);
    
    return EXIT_SUCCESS;
}

void display(struct Array arr){

    cout << "Displaying the array elements: ";
    for(int i = 0; i < arr.length ; i++){

        cout << arr.A[i] <<" ";
    }
    cout<<endl;

}


void rearrangeArray(struct Array* arr){
    int i = 0, j = arr->length-1;
    while (i<j)
    {
        while (arr->A[i]<0)
        {
            i++;
        }
        while (arr->A[j]>=0)
        {
            j--;
        }
        if(i<j){
            swapArray(&arr->A[i],&arr->A[j]);
        }
        else{
            break;
        }
        
        
    }
    
}

void swapArray(int* x, int* y){
    
    *x = *x^*y;
    *y = *x^*y;
    *x = *x^*y;
}
