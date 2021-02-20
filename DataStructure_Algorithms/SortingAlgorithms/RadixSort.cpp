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

void CountSort(int a[],int n,int pos){
    int *c = new int[10]{0};
    int *b = new int[n];
    int i;
    for(i=0;i<n;i++){
        ++c[(a[i]/pos)%10];
    }
    for(i=1;i<10;i++){
        c[i] = c[i]+c[i-1];
    }
    for(i=n-1;i>-1;i--){
        b[--c[(a[i]/pos)%10]] = a[i];
    }
    for(i=0;i<n;i++){
        a[i] = b[i];
    }
}

void RadixSort(int a[],int n){
    int maxVal = findMax(a,n);
    int pos;
    for(pos=1; maxVal/pos>0; pos*=10){
        CountSort(a,n,pos);
    }
}


int main(){
    int a[]{5,9,2,7,6,4,1,3,4};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Before sorting...";
    printArray(a,n);
    RadixSort(a,n),
    cout<<"After sorting...";
    printArray(a,n);

    return 0;
}
