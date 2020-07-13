#include<iostream>
using namespace std;

void display(struct Array);
void del(struct Array*,int);

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

    del(&a,4);
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

void del(struct Array* arr,int index){

    if(index >= 0 && index < arr->length){
        for (size_t i = index; i < arr->length-1; i++)
        {
            arr->A[index] = arr->A[index+1];
        }
        arr->length--;
        
    }
    else{
        cout<<"Deletion not possible."<<endl;
    }
}


