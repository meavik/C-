#include<iostream>
using namespace std;

void mergeFunction(int a[], int low, int mid, int high){
    int i,j,k;
    int b[high+1];
    i = k = low;
    j = mid+1;
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
    for(i = low;i<=high;){
        a[i] = b[i++];
    }
}
void mergeSort(int a[], int n){

    int i,p,mid,low,high;
    for(p = 2; p<=n; p *= 2){
        for(i = 0; i+p-1<n; i += p){
            low = i;
            high = i+p-1;
            mid = (low+high)/2;
            mergeFunction(a,low,mid,high);
        }
        if(p/2<n){
            mergeFunction(a,0,p/2,n-1);
        }
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
    int a[]{8,3,7,4,9,2,6,5};
    int arraySize = sizeof(a)/sizeof(a[0]);
    cout<<"Initial array..."<<endl;
    printArray(a,arraySize);
    mergeSort(a,arraySize);
    cout<<"After sorting..."<<endl;
    printArray(a,arraySize);
    return 0;
}
