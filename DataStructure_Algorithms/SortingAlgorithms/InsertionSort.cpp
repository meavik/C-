#include<iostream>
using std::cout;
using std::endl;


 void printArray(int a[], int n){
    int i = 0;
    for(;i<n;){
        cout<<a[i++]<<" ";
    }
    cout<<endl;
 }
void InSort(int a[],int n){
    int i,j,k;
    for(i = 1;i<n;i++){
        j = i-1;
        k = a[i];
        while(j>-1&&a[j]>k){
            a[j+1] = a[j--];

        }
        a[j+1] = k;
    }
}

 int main(){
    int a[]{4,12,9,7,3,1,5,19};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Before sorting: ";
    printArray(a,n);
    InSort(a,n);
    cout<<"After sorting: ";
    printArray(a,n);

    return 0;
 }
