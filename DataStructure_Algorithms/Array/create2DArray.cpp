#include<iostream>
using namespace std;

int main(void){
    //creating 2D array in stack
    // int A[3][3] {{1,2,3},{4,5,6},{7,8,9}};
    //creating 2D array partially in stack(rows on stack,col on heap)
    // int *A[3];
    // A[0] = new int[3]{1,2,3};
    // A[1] = new int[3]{11,21,31};
    // A[2] = new int[3]{51,62,73};
    // int row = sizeof(A) / sizeof(A[0]);
    // int col = sizeof(A[0])/sizeof(A[0][0]);
    //creating the whole array in heap
    int **A;
    A = new int*[3];
    A[0] = new int[3]{1,2,3};
    A[1] = new int[3]{4,5,6};
    A[2] = new int[3]{6,7,8};
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
        
    }

    return EXIT_SUCCESS;
}
