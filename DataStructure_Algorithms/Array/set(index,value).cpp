#include<iostream>
using namespace std;

void display(struct Array);
void setFunction(struct Array*,int,int);


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
    int ele,index,val;
    cout<<"Enter the index: ";
    cin >> index;
    cout<<"Enter the value you want to set: ";
    cin >> val;
    setFunction(&a,index,val);
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

void setFunction(struct Array* arr,int index,int val){

    if(index >= 0 && index < arr->length){
        arr->A[index] = val;
    }
    else{
        cout<<"Operation can not be performed on this index."<<endl;
    }
}
