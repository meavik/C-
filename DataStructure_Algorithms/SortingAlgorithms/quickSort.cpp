#include<iostream>
using namespace std;

void printArray(int[], int);
void swapValue(int*,int*);
void quickSort(int[], int, int);
int partitionArray(int[], int, int);

int main(){
    int arr[]{50,70,60,90,40,80,10,20,30};
    int arraySize = sizeof(arr)/sizeof(arr[0]);
    cout<<"Initial array..."<<endl;
    printArray(arr,arraySize);
    quickSort(arr,0,arraySize-1);
    cout<<"After Quick Sort..."<<endl;
    printArray(arr,arraySize);
    return 0;
}

void printArray(int arr[], int n){
    int i = 0;
    for(;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapValue(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partitionArray(int arr[], int low,int high){
    int pivot = arr[low];
    int i = low, j = high;
    do{
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            swapValue(&arr[i],&arr[j]);
        }
    }while(i<j);
    swapValue(&arr[low],&arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high){

    int partitionIndex;
    if(low<high){
        partitionIndex = partitionArray(arr,low,high);
        quickSort(arr,low,partitionIndex-1);
        quickSort(arr,partitionIndex+1,high);
    }
}
