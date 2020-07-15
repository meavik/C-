#include<iostream>
using namespace std;

void display(struct Array);
bool sortedArray(struct Array,int);
void insertInSortedArray(struct Array*,int,int);

enum Choice{ascending=1,descending};
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
    cout<<"1.Asscending\n2.Desccending"<<endl;
    int c ;
    cin >> c;
    bool x = sortedArray(a,c);
    if(x == true){
        cout<<"Array is sorted."<<endl;
    }
    else
    {
        cout<<"Array is not sorted."<<endl;
    }

    int insert_value;
    cout<<"Enter the value you want to insert: ";
    cin >> insert_value;
    insertInSortedArray(&a,insert_value,c);
    cout<<"<---After inserting the array--->"<<endl;
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

bool sortedArray(struct Array arr,int c){
   
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

void insertInSortedArray(struct Array* arr,int val,int c){

    int i = arr->length-1;
    if(c == ascending){
        while(arr->A[i] > val){
        arr->A[i+1] = arr->A[i];
        i--;
    }
    }
    else
    {
        while(arr->A[i] < val){
        arr->A[i+1] = arr->A[i];
        i--;
    }
    }
    arr->A[i+1] = val;
    arr->length++;


}
