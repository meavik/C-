#include<iostream>
using namespace std;

void mergeArray(int a[], int low, int mid, int high){

    int i,j,k;
    int b[high+1];
    i = k = low;
    j = mid+1;
    while(i<=mid&&j<=high){
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
    for(i = 0;i<=high;){
        a[i] = b[i++];
    }
}

void printArray(int a[],int n){
    int i = 0;
    for(;i<n;){
        cout<<a[i++]<<" ";
    }
    cout<<endl;
}
int main(){

    int a[]{2,5,8,12,3,6,7,10};
    int arraySize = sizeof(a)/sizeof(a[0]);
    int mid = (arraySize-1)/2;
    cout<<"Printing the list..."<<endl;
    printArray(a,arraySize);
    mergeArray(a,0,mid,arraySize-1);
    cout<<"After merging..."<<endl;
    printArray(a,arraySize);

    return 0;
}
