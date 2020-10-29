#include<iostream>
using namespace std;

void swapValue(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int a[], int n){

    int i,j,flag;
    for(i = 0;i<n-1;i++){
        flag = 0;
        for(j =0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swapValue(&a[j],&a[j+1]);
                flag++;
            }
        }
        if(flag == 0){
            break;
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

    int a[]{12,7,9,17,11,8,15,1};
    int arraySize = sizeof(a)/sizeof(a[0]);
    cout<<"Initial array..."<<endl;
    printArray(a,arraySize);
    bubbleSort(a,arraySize);
    cout<<"After sorting..."<<endl;
    printArray(a,arraySize);

    return 0;
}
