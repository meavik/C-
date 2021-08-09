#include<iostream>
using namespace std;

void inputArray(int a[],int n){
    int i=0;
    for(;i<n;){
        cin>>a[i++];
    }
}

void outputArray(int a[],int n){
    int i=0;
    for(;i<n;){
        cout<<a[i++]<<" ";
    }
    cout<<endl;
}

int partitionArray(int a[],int l,int h){
    int pivot = a[l],i = l+1,j = h,temp;
    do{
        while(a[i]<=pivot){i++;}
        while(a[j]>pivot){j--;}
        if(i<j){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }

    }while(i<j);
    temp = a[l];
    a[l] = a[j];
    a[j] = temp;
    return j;
}

void QuickSort(int a[],int l,int h){
    int loc;
    if(l<h){
        loc = partitionArray(a,l,h);
        QuickSort(a,l,loc);
        QuickSort(a,loc+1,h);
    }
}

int main(){

    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements: ";
    inputArray(a,n);
    cout<<"Array elements: ";
    outputArray(a,n);
    int l = 0, h = n-1;
    QuickSort(a,l,h);
    cout<<"After sorting\nArray elements: ";
    outputArray(a,n);
    return 0;
}
