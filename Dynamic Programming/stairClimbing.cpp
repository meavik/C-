/*
You are climbing a staircase and it takes n steps to reach to the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
 
*/
#include <iostream>
using namespace std;

const int N = 1e5+2;

int dp[N];

int stairClimbing(int n){
    if(n==0) return 0;
    if(n==1 || n == 2) return n;
    if(n<0) return 0;
    if(dp[n] != 0) return dp[n];
    dp[n] = stairClimbing(n-1) + stairClimbing(n-2);
    return dp[n];
}

int main(){
    
    cout<<stairClimbing(2)<<endl;
    cout<<stairClimbing(-1)<<endl;
    cout<<stairClimbing(6)<<endl;

    return 0;
}
