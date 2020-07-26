#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void display(struct Array);
void append(struct Array*,int);
void del(struct Array*,int);
void insert(struct Array*,int,int);
int linearSearch(struct Array,int);
int binarySearch(struct Array,int);
int get(struct Array,int);
void set(struct Array*,int,int);
int maxNum(struct Array);
int minNum(struct Array);
int sum(struct Array);
double avg(struct Array);
void revWithoutTemp(struct Array*);
void shiftLArray(struct Array* );
void shiftRArray(struct Array* );
void rotateRight(struct Array*);
void rotateLeft(struct Array*);
void insertInSortedArray(struct Array*,int);
void isSorted(struct Array);
void seperatePosNeg(struct Array*);
void Swap(int&,int&);
Array* merge(struct Array,struct Array);
Array* UnionOfArray(struct Array,struct Array);
Array* IntersectionOfArray(struct Array,struct Array);
Array* DifferenceOfArray(struct Array,struct Array);
void singleMissingElementSortedArray(struct Array);
void multipleMissingElementSortedArray(struct Array);
void multipleMissingElementSortedArrayHashing(struct Array);
void findindDuplicatesSortedArray(struct Array);
void countDuplicatesSortedArray(struct Array);
void duplicateCountingUsingHashing(struct Array);
void findingDuplicatesUnsortedArray(struct Array);
void findingDuplicatesUnsortedArrayHashing(struct Array);
void findingPairOsSum(struct Array,int);
void findPairOfSumHashing(struct Array,int);
void findingPairinSortedArray(struct Array,int);
void findMinMax(struct Array);
Array* removeDuplicatesTempArray(struct Array);
void removeDuplicatesTempArrayConstantSpace(struct Array*);

int main(void){

    Array A  = {{1,2,2,3,4,5,5,6},10,8};
    // Array B  = {{2,4,5,7,12},10,5};
    display(A);
    // display(B);
    // int x = binarySearch(arr,5);
    // if(x == -1){
    //     cout<<"Not Found"<<endl;
    // }
    // else
    // {
    //     cout<<"Found at "<<x<<endl;
    // }
    // set(&arr,4,10);
    // cout<<"Max "<<maxNum(arr)<<endl;
    // cout<<"Min "<<minNum(arr)<<endl;
    // cout<<"Sum "<<sum(arr)<<endl;
    // cout<<"Avg "<<avg(arr)<<endl;
    // Array *C = DifferenceOfArray(A,B);
    // display(*C);
    removeDuplicatesTempArrayConstantSpace(&A);
    display(A);

    return EXIT_SUCCESS;
}

void display(struct Array arr){
    cout<<"Displaying array: ";
    for (size_t i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
    
}

void append(struct Array* arr,int n){
    if( arr->length < arr->size){
        arr->A[arr->length++] = n;
    }
}

void insert(struct Array* arr,int index,int val){
    if(index >=0 && index <=arr->length){
        for (size_t i = arr->length; i > index ; i--)
        {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = val;
        arr->length++;
        
    }
}

void del(struct Array* arr,int index){
    if(index >=0 && index <= arr->length){
        for (size_t i = index; i < arr->length; i++)
        {
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
        
    }
}

int linearSearch(struct Array arr,int val){
    int i = 0;
    while (i<arr.length)
    {
        if (arr.A[i] == val)
        {
            return i;
        }
        i++;
        
    }
    return -1;
    
    
}

int binarySearch(struct Array arr,int key){
    
    int high = arr.length-1;
    int low = 0;
    int mid;
    while (low<=high)
    {
        mid = (high+low)/2;
        if (arr.A[mid] == key){
            return mid;
        }

        
        else if (arr.A[mid] > key)
        {
            high = mid -1;
        }
        else
        {
            low = mid + 1;
        }
           
    }
    return -1;
    
}

int get(struct Array arr,int index){
    if (index >= 0 && index <= arr.length)
    {
        return arr.A[index];
    }
    else
    {
        return INT32_MIN;
    }
}
void set(struct Array* arr,int index,int val){
    if (index >= 0 && index <= arr->length)
    {
        arr->A[index] = val;
    }
    else
    {
        cout<<"Index not valid"<<endl;
    }
}

int maxNum(struct Array arr){
    int max = arr.A[0];
    for (size_t i = 1; i < arr.length; i++)
    {
        if(arr.A[i] > max){
            max = arr.A[i];
        }
    }
    return max;
    
}

int minNum(struct Array arr){
    int min = arr.A[0];
    for (size_t i = 1; i < arr.length; i++)
    {
        if(arr.A[i] < min){
            min = arr.A[i];
        }
    }
    return min;
    
}

int sum(struct Array arr){

    int sum = 0;
    int i = 0;
    while (i<arr.length)
    {
        sum +=arr.A[i];
        i++;
    }
    return sum;
    
}

double avg(struct Array arr){

    int s = sum(arr);
    double avg;
    avg = (double)s / arr.length; 

    return avg;
    
}

void revTemp(struct Array* arr){
    int l = arr->length;
    int *A = new int[l]{0};
    for (size_t i = 0,j = l-1; i <l;j--, i++)
    {
        A[i] = arr->A[j];
    }
    for (size_t i = 0; i < l; i++)
    {
        arr->A[i] = A[i];
    }
    cout<<endl;
    
    
}
void revWithoutTemp(struct Array* arr){
   for (size_t i = 0,j = arr->length-1; j>i; j--,i++)
   {
    //    int temp;
    //    temp = arr->A[i];
    //    arr->A[i] = arr->A[j];
    //    arr->A[j] = temp;
    arr->A[i] = arr->A[i]^arr->A[j];
    arr->A[j] = arr->A[i]^arr->A[j];
    arr->A[i] = arr->A[i]^arr->A[j];
   }
   
}
void shiftLArray(struct Array* arr){
    for (size_t i = 0; i < arr->length; i++)
    {
        arr->A[i] = arr->A[i+1];
    }
    arr->A[arr->length-1] = 0;
    
}
void shiftRArray(struct Array* arr){
    for (size_t i = arr->length-1; i >0; i--)
    {
        arr->A[i] = arr->A[i-1];
    }
    arr->A[0] = 0;
    
}

void rotateRight(struct Array* arr){
    int l = arr->A[arr->length-1];
    for (size_t i = arr->length-1; i >0; i--)
    {
        arr->A[i] = arr->A[i-1];
    }
    arr->A[0] = l;
    
}
void rotateLeft(struct Array* arr){
    int s = arr->A[0];
    for (size_t i = 0; i < arr->length; i++)
    {
        arr->A[i]=arr->A[i+1];
    }
    arr->A[arr->length-1] = s;
    
}

void insertInSortedArray(struct Array* arr,int val){
    int i = arr->length-1;
    while (val<arr->A[i])
    {
        arr->A[i+1] = arr->A[i];
        i --;
    }
    arr->A[i+1] = val;
    arr->length++;
    
}

void isSorted(struct Array arr){
    int i = 0;
    while (arr.A[i]>arr.A[i+1])
    {
        i++;
    }
    if(i == arr.length-1){
        cout<<"Sorted"<<endl;
    }
    else
    {
        cout<<"Not sorted"<<endl;
    }
    
    
}

void Swap(int& x,int& y){
    x = x^y;
    y = x^y;
    x = x^y;
}
void seperatePosNeg(struct Array* arr){
    int i = 0;
    int j = arr->length-1;
    while (i<j)
    {
        while (arr->A[i]<0)
        {
            i++;
        }
        while (arr->A[j]>=0)
        {
            j--;
        }
        if(i<j){
            Swap(arr->A[i],arr->A[j]);
        }  
    }
    
}

Array* merge(struct Array arr1,struct Array arr2){
    
    int length = arr1.length+arr2.length;
    Array *C = new Array[length];
    int i,j,k;
    i = j = k = 0;
    while (i<arr1.length && j<arr2.length)
    {
        if (arr1.A[i]<arr2.A[j])
        {
            C->A[k++] = arr1.A[i++];
        }
        else
        {
            C->A[k++] = arr2.A[j++];
        }
        
        
    }
    for (; i < arr1.length;i++)
    {
        C->A[k++] = arr1.A[i++];
    }
    for (; j < arr2.length;j++)
    {
        C->A[k++] = arr2.A[j++];
    }
    C->size = length;
    C->length = length;
    
    return C;
    
}

Array* UnionOfArray(struct Array A,struct Array B){

    Array* C = new Array[20];
    int i,j,k;
    i = j = k = 0; 
    while (i<A.length&& j<B.length)
    {
        if (A.A[i] == B.A[j])
        {
            C->A[k++] = A.A[i++];
            j++;
        }
        else if(A.A[i]<B.A[j])
        {
            C->A[k++] = A.A[i++];
        }
        else
        {
            C->A[k++] = B.A[j++];
        }
    
    }

    for (; i < A.length; i++)
    {
        C->A[k++] = A.A[i];
    }

    for (; j < B.length; j++)
    {
        C->A[k++] = B.A[j];
    }
    C->length = C->size = k;
    
    return C ;
}

Array* IntersectionOfArray(struct Array A,struct Array B){

    Array *C = new Array[20];
    int i,j,k;
    i = j = k = 0;

    while (i < A.length && j < B.length)
    {
        if(B.A[j] < A.A[i]){
            j++;
        }
        else if(B.A[j] > A.A[i]){
            i++;
        }

        else
        {
            C->A[k++] = A.A[i++];
        }
        
    }

    C->length = C->size = k;
    
    return C ;

    
}

Array* DifferenceOfArray(struct Array A,struct Array B){

    Array* C = new Array[20];
    int i,j,k;
    i = j = k = 0;
    while (i < A.length && j < B.length)
    {
        if (B.A[j] < A.A[i])
        {
            j++;
        }
        else if(B.A[j] == A.A[i])
        {
            i++;
            j++;
        }
        else
        {
            C->A[k++] = A.A[i++];
        }  
        
    }

    for(;i<A.length;i++){
        C->A[k++] = A.A[i];
    }
    C->length = C->size = k;
    return C;
    
}

void singleMissingElementSortedArray(struct Array arr){

    int difference = arr.A[0] - 0;
    int i = 0;
    while(i<arr.length){
        if (arr.A[i] != difference)
        {
            cout<<"Missing element is: "<< difference+i<<endl;
            break;
            
        }
        i++;
        
    }

}

void multipleMissingElementSortedArray(struct Array arr){

    int difference = arr.A[0]-0;
    int i = 0;
    cout<<"Missing elements are: ";
    while (i< arr.length)
    {
        if (arr.A[i]-i != difference)
        {
            while (difference < arr.A[i]-i)
            {
                cout<<difference+i<<" ";
                difference++;
            }
            
        }
        i++;
        
    }
    cout<<endl;
    
    
}

void multipleMissingElementSortedArrayHashing(struct Array arr){
    Array *C = new Array[20]{};
    C->length = 20;
    int i = 0;
    while (i < arr.length)
    {
        C->A[arr.A[i]]++;
        i++;
    }
    cout<<"Missing elements: ";
    for (size_t i = arr.A[0]; i < C->length; i++)
    {
        if (C->A[i] == 0)
        {
            cout<<i<<" ";
        }
        
        
    }
    cout<<endl;
    
}

void findindDuplicatesSortedArray(struct Array arr){

    int i = 0;
    int lastDuplicate = 0;
    cout<<"Printing duplicates: ";
    while (i < arr.length-1)
    {
        if (arr.A[i] == arr.A[i+1] && arr.A[i] != lastDuplicate)
        {
           
                cout<<arr.A[i]<<" ";
                lastDuplicate = arr.A[i];
            
        }
        i++;
    }
    cout<<endl;
    
}

void countDuplicatesSortedArray(struct Array arr){
    int i,j;
    i = j = 0;
    int lastDuplicate = INT32_MIN;
    while (i< arr.length-1)
    {
        if (arr.A[i] == arr.A[i+1])
        {
            j = i+1;
            while (arr.A[j] == arr.A[i]) j++;
            cout<<arr.A[i]<<" appeared "<<j-i<<" times."<<endl;
            i = j -1 ;
            
        }
        i++;
        
    }
    
}

void duplicateCountingUsingHashing(struct Array arr){
    Array *H;
    H = new Array[6]{};
    for (size_t i = 0; i < arr.length; i++)
    {
        H->A[arr.A[i]]++;
    }
    for (size_t i = 0; i < 6; i++)
    {
        if (H->A[i] > 1)
        {
            cout<<i<<" appeared "<<H->A[i]<<" times."<<endl;
        }
        
    }
    
    

}

void findingDuplicatesUnsortedArray(struct Array arr){
    int count;
    for (size_t i = 0; i < arr.length -1; i++)
    {
        count = 1;
        if(arr.A[i] != -1){
            for (size_t j = i+1; j < arr.length; j++)
            {
                if (arr.A[j] == arr.A[i])
                {
                    count++;
                    arr.A[j] = -1;
                }
                
            }
            if (count >1){
                cout<<arr.A[i]<<" appeared "<<count<<" times"<<endl;
            }
            
        }
    }
    
}


void findingDuplicatesUnsortedArrayHashing(struct Array arr){
    Array *C;
    C = new Array[13]{};
    for (size_t i = 0; i < arr.length; i++)
    {
        C->A[arr.A[i]]++;
    }
    for (size_t i = 0; i < 13; i++)
    {
        if (C->A[i] > 1)
        {
            cout<<i<<" appeared "<< C->A[i] <<" times"<<endl;
        }
        
    }
    
}

void findingPairOsSum(struct Array arr,int val){
    for (size_t i = 0; i < arr.length-1; i++)
    {
        for (size_t j = i+1; j < arr.length; j++)
        {
            if (arr.A[i] + arr.A[j] == val)
            {
                cout<<arr.A[i]<<" + " <<arr.A[j]<<" = "<<val<<endl;
            }
            
        }
        
    }
    
}

void findPairOfSumHashing(struct Array arr, int val)
{
    Array C{{0, 0, 0, 0, 0, 0, 0}, 20, 8};
    for (size_t i = 0; i < arr.length; i++)
    {
        C.A[arr.A[i]]++;
    }
    for (size_t i = 0; i < C.length; i++)
    {
        if (C.A[val - arr.A[i]] == 1)
        {
            cout << arr.A[i] << " + " << val - arr.A[i] << " = " << val << endl;
        }
        C.A[arr.A[i]]++;
    }
}

void findingPairinSortedArray(struct Array arr,int val){
    int i,j;
    i = 0;
    j = arr.length-1;
    while(i<j){
        if (arr.A[i] + arr.A[j] > val)
        {
            j--;
        }
        else if (arr.A[i] + arr.A[j] < val)
        {
            i++;
        }
        else
        {
            cout<<arr.A[i] <<" + " <<arr.A[j] <<" = "<< val<<endl;
            j--;
            i++;
        }
        
        
        
    }
    
}

void findMinMax(struct Array arr){
    int min = arr.A[0];
    int max = arr.A[0];
    for (size_t i = 1; i < arr.length; i++)
    {
        if (arr.A[i] > max)
        {
            max = arr.A[i];
        }
        if (arr.A[i] < min)
        {
            min = arr.A[i];
        }
        
        
    }
    cout<<"Min "<<min<<endl;
    cout<<"Max "<<max<<endl;
}

Array* removeDuplicatesTempArray(struct Array arr){
    Array *C = new Array[arr.size];
    int i , j;
    i = j = 0;
    while(i < arr.length-1){
        if(arr.A[i] == arr.A[i+1]){
            i++;
        }
        else{
            C->A[j] = arr.A[i];
            i++;
            j++;
        }
    }
    C->A[j] = arr.A[arr.length-1];
    C->length = j;

    return C;
}

void removeDuplicatesTempArrayConstantSpace(struct Array* arr){
    int j = 0;
    for (size_t i = 0; i < arr->length-1; i++)
    {
        if (arr->A[i] != arr->A[i+1])
        {
            arr->A[j] = arr->A[i];
            j++;
        }
        
    }
    arr->A[j] = arr->A[arr->length-1];

    arr->length = j;
    
}
