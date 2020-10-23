#include<iostream>
using namespace std;
void swapValue(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

void selectionSort(int arr[],int n){

    int i = 0,j,minIndex;
    for( ;i < n-1 ; i++){
            minIndex = i;
        for( j = i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swapValue(&arr[minIndex],&arr[i]);
    }
}

void printArray(int arr[],int n){
    int  i = 0;
    for ( ; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main(){

    int arr[] = {20,25,7,17,35,5,3};
    int arraySize = sizeof(arr)/sizeof(arr[0]);
    cout<<"Initial array...."<<endl;
    printArray(arr,arraySize);
    cout<<"Performing Selection sort..."<<endl;
    selectionSort(arr,arraySize);
    printArray(arr,arraySize);
    return 0;
}
