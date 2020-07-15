#include<iostream>
using namespace std;

void display(struct Array);
bool sortedArray(struct Array);


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
    bool x = sortedArray(a);
    if(x == true){
        cout<<"Array is sorted."<<endl;
    }
    else
    {
        cout<<"Array is not sorted."<<endl;
    }
    
    return EXIT_SUCCESS;
}

void display(struct Array arr){

    cout << "Displaying the array elements: ";
    for(int i = 0; i < arr.length ; i++){

        cout << arr.A[i] <<" ";
    }
    cout<<endl;

}

bool sortedArray(struct Array arr){

    enum Choice{ascending=1,descending};
    cout<<"1.Asscending\n2.Desccending"<<endl;
    int c ;
    cin >> c;   
    if(c == ascending){
        for (size_t i = 0; i < arr.length-1; i++)
    {
        if (arr.A[i]>arr.A[i+1])
        {
            return false;
        }
        
    }
    }
    else
    {
        for (size_t i = 0; i < arr.length-1; i++)
    {
        if (arr.A[i] < arr.A[i+1])
        {
            return false;
        }
        
    }
    }
    
    
    return true;

}
