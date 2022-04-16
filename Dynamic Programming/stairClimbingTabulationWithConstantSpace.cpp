/*
You are climbing a staircase and it takes n steps to reach to the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

*/
#include <iostream>
using namespace std;

int stairClimbing(int n){
    int oneStep,twoStep,temp;
    oneStep = twoStep = 1;
    if(n<0) return 0;
    if(n == 0 || n == 1) return oneStep;
    for(int i = 2;i<=n;i++){
        temp = oneStep;
        oneStep += twoStep;
        twoStep = temp; 
    }
    return oneStep;
}

int main(){
    
    cout<<stairClimbing(2)<<endl;
    cout<<stairClimbing(-1)<<endl;
    cout<<stairClimbing(6)<<endl;
    cout<<stairClimbing(5)<<endl;

    return 0;
}
