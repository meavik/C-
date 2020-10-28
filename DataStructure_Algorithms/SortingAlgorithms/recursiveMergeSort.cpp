#include<iostream>
using namespace std;

void mergeFunction(int a[], int low, int mid, int high){

    int i,j,k;
    int b[high+1];
    i = k = low;
    j = mid + 1;
    while(i<=mid && j<= high){
        if(a[i]<a[j]){
            b[k++] = a[i++];
        }
        else{
            b[k++] = a[j++];
        }
    }
    for(;i<=mid;){
        b[k++] = a[i++];
    }
    for(;j<=high;){
        b[k++] = a[j++];
    }
    for(i = low; i<=high;){
        a[i] = b[i++];
    }
}

void mergeSort(int a[], int low, int high){

    int mid;
    if(low<high){
        mid = (low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        mergeFunction(a,low,mid,high);
    }
}

void printArray(int a[], int n){

    int i = 0;
    for(;i<n;){

        cout<<a[i++]<<" ";
    }
    cout<<endl;
}

int main(){

    int a[]{8,2,9,6,5,3,7,4};
    int arraySize = sizeof(a)/sizeof(a[0]);
    cout<<"Initial array..."<<endl;
    printArray(a,arraySize);
    cout<<"After sorting..."<<endl;
    mergeSort(a,0,arraySize-1);
    printArray(a,arraySize);

    return 0;
}
