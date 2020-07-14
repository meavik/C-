#include<iostream>
using namespace std;

void display(struct Array);
int binarySearch(struct Array,int);


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
    
    int ele,index;
    cout<<"Enter the element you want to search: ";
    cin >> ele;
    index = binarySearch(a,ele);

    if (index == -1)
    {
        cout << "Search unsuccessful"<<endl;
    }
    else{
        cout<<ele<<" found at index "<<index<<endl;
    }
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

int binarySearch(struct Array arr,int key){
    int mid,low,high;
    low = 0;
    high = arr.length - 1;
    //static int i = 0;
    while(low<=high){
        
        //cout<< ++i <<"search attempt"<<endl;
        mid = (low+high)/2;
        if(key == arr.A[mid]){
            return mid;
        }
        else if(key < arr.A[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}
