#include<iostream>
using std::cout;
using std::endl;

void printArray(int a[],int n){
    int i = 0;
    for(;i<n;){
        cout<<a[i++]<<" ";
    }
    cout<<endl;
}

int findMax(int a[],int n){
    int i = 0;
    int maxVal = INT_MIN;
    for(;i<n;i++){
        if(a[i]>maxVal){
            maxVal = a[i];
        }
    }
    return maxVal;
}

void CountSort(int a[],int n){
    int maxVal,i;
    int *b = new int[n];
    maxVal = findMax(a,n);
    int *c = new int[maxVal+1];
    for(i=0;i<maxVal+1;i++){
        c[i] = 0;
    }
    for(i=0;i<n;i++){
        ++c[a[i]];
    }
    for(i=1;i<maxVal+1;i++){
        c[i] += c[i-1];
    }
    for(i=n-1;i>=0;i--){
        b[--c[a[i]]] = a[i];
    }
    for(i=0;i<n;i++){
        a[i] = b[i];
    }
    delete b;
    delete c;
}

int main(){
    int a[]{1,5,7,9,6,3,1,2,4,6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Before sorting...";
    printArray(a,n);
    CountSort(a,n);
    cout<<"After sorting...";
    printArray(a,n);

    return 0;
}
