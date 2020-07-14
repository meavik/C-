#include<iostream>
using namespace std;

void display(struct Array);
int maxValue(struct Array);


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
    int max = maxValue(a);
    cout<<"Maximum value is : "<<max<<endl;
    
    return EXIT_SUCCESS;
}

void display(struct Array arr){

    cout << "Displaying the array elements: ";
    for(int i = 0; i < arr.length ; i++){

        cout << arr.A[i] <<" ";
    }
    cout<<endl;

}

int maxValue(struct Array arr){
    int max = arr.A[0];
    for (size_t i = 1; i < arr.length; i++)
    {
        if(arr.A[i] > max)
            max = arr.A[i];
    }
    return max;
}
