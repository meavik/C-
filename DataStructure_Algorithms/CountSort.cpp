#include<iostream>
using std::cout;
using std::endl;

int FindMax(int a[],int n){
    int maxVal = INT_MIN;
    int i = 0;
    for(;i<n;i++){
        if(a[i]>maxVal){
            maxVal = a[i];
        }
    }
    return maxVal;
}

void CountSort(int a[],int n){
    int maxVal,i,j;
    maxVal = FindMax(a,n);
    int *c = new int [maxVal+1];
    for(i=0;i<maxVal+1;i++){
        c[i] = 0;
    }
    for(i = 0;i<maxVal+1;i++){
        c[a[i]]++;
    }
    i = 0, j = 0;
    while(i<maxVal+1){
        if(c[i]>0){
            a[j++] = i;
            c[i]--;
        }
        else{
            i++;
        }
    }
}

void PrintArray(int a[],int n){
    int i = 0;
    for(;i<n;){
        cout<<a[i++]<<" ";
    }
    cout<<endl;
}

int main(){
    int a[]{2,2,1,3,1,5,4};
    int ArraySize = sizeof(a)/sizeof(a[0]);
    cout<<"Before sorting :";
    PrintArray(a,ArraySize);
    CountSort(a,ArraySize);
    cout<<"After sorting :";
    PrintArray(a,ArraySize);

    return 0;
}
