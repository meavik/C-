#include<iostream>
using namespace std;

void display(struct Array);
void shiftArray(struct Array*);


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
    shiftArray(&a);
    cout<<"<-<-<-After right shifting->->->"<<endl;
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

void shiftArray(struct Array* arr){
   
   for(int i = arr->length-1;i>=0;i--){
       arr->A[i] = arr->A[i-1];
   }
   arr->A[0] = 0;
    
}
