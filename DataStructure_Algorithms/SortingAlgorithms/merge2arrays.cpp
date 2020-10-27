#include<iostream>
using namespace std;

void mergeArray(int a[], int b[], int c[], int m, int n){

    int i,j,k;
    i = j = k = 0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k++] = a[i++];
        }
        else{
            c[k++] = b[j++];
        }
    }
    for(;i<m;){
        c[k++] = a[i++];
    }
    for(;j<n;){
        c[k++] = b[j++];
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

    int a[]{2,5,8,12};
    int b[]{3,6,7,10};
    int size1 = sizeof(a)/sizeof(a[0]);
    int size2 = sizeof(b)/sizeof(b[0]);
    int c[size1+size2];
    cout<<"First list..."<<endl;
    printArray(a,size1);
    cout<<"Second list..."<<endl;
    printArray(b,size2);
    mergeArray(a,b,c,size1,size2);
    cout<<"Merging two list..."<<endl;
    printArray(c,size1+size2);

    return 0;
}
