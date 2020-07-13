#include<iostream>
using namespace std;

void display(struct Array);
void append(struct Array*,int);

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
    int ele;
    cout<<"Enter an element to append: ";
    cin >> ele;
    append(&a,ele);
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

void append(struct Array* arr,int x){

    
    if(arr->length<arr->size){
        arr->A[arr->length++] = x;
    }
    else{
        cout<<"Limit excceed"<<endl;
    }

}
