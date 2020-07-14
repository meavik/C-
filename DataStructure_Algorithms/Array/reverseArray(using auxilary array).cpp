#include<iostream>
using namespace std;

void display(struct Array);
void reverseArray(struct Array*);


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
    reverseArray(&a);
    cout<<"<-<-<-After reversing->->->"<<endl;
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

void reverseArray(struct Array* arr){
    int size = arr->length;
    int *B = new int[size];
    for(int i = arr->length-1,j = 0; i >=0;i--,j++){
        B[j] = arr->A[i];
    }
    for(int i = 0; i<arr->length;i++){
        arr->A[i] = B[i];
    }
    
}
