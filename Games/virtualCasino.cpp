#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

static int cash=100;

void Play(int bet){
     char *c = new char[3];
     c[0] = 'J';
     c[1] = 'Q';
     c[2] = 'K';
     cout<<"Shuffling ... "<<endl;
     srand(time(0));

     for(int i = 0; i<5; i++)
     {
        int x =(rand()%3);
        int y = (rand()%3);
        int temp = c[x];
        c[x] = c[y];
        c[y] = temp;
     }
     int playerGuess;
     cout<<"What's the position of queen : 1,2,3?"<<endl;
     cin>>playerGuess;
     if(c[playerGuess-1] == 'Q'){
         cash += (3*bet);
         cout<<"You win!!!\n"<<"Result: "<<c[0]<<" "<<c[1]<<" "<<c[2]<<endl<<"Total amount "<<cash<<endl;
     }
     else{
         cash -= bet;
         cout<<"You loose!!!\n"<<"Result: "<<c[0]<<" "<<c[1]<<" "<<c[2]<<endl<<"Total amount "<<cash<<endl;
     }
     delete[] c;
}

int main(void){
    cout<<endl<<"****   ****    ****    ****    ****    ****    ****"<<endl;
    cout<<"Welcome to virtual casino"<<endl;
    cout<<"Total cash"<<cash<<endl;

    int bet;
    while(cash>0){
        cout<<"What's your bet? $"<<endl;
        cin>>bet;
        if(bet == 0 || bet > cash){
            cout<<"You don't have enough money!"<<endl;
            break;
        }
        Play(bet);
        cout<<endl<<"****   ****    ****    ****    ****    ****    ****"<<endl;
    }
    

    return EXIT_SUCCESS;
}
