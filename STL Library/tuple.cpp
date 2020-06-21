#include<iostream>
#include<tuple>
using namespace std;

int main(void){

    tuple <string,int,float> t1{"Shaun",22,3.4};
// printing the first index value of the tuple
    cout<<get<0>(t1)<<endl;
// modifying the values of the tuple
    get<0>(t1) = "Avik";
    get<1>(t1) = 23;

    cout<<get<0>(t1)<<endl;
    cout<<get<1>(t1)<<endl;
    cout<<get<2>(t1)<<endl;

//printing the size of the tuple
    cout<<tuple_size<decltype(t1)>::value<<endl;

    tuple<string,int,float> t2 = make_tuple("Shaun",20,4.0);
    cout<<"Printing the value of the second tuple: "<<endl;
    cout<<get<0>(t2)<<endl; 

//swapping the tuples value

    // t1.swap(t2);
    // cout<<"After swapping the first tupple: "<<endl;
    // cout<<get<0>(t1)<<endl;
    // cout<<get<1>(t1)<<endl;
    // cout<<get<2>(t1)<<endl;

//the tie function unpack the tuple values.it works with ignore or without ignore

    string name;
    int age;
    float gpa;
    tie(name,age,gpa) = t1;

    cout<<name<<" "<<age<<" "<<gpa<<endl; 

    cout<<get<0>(t1)<<endl;
    //concate two tuples

    auto t3 = tuple_cat(t1,t2);
    cout<<"After concatenating "<<endl;
    cout<<get<0>(t3)<<endl;
    cout<<get<1>(t3)<<endl;
    cout<<get<2>(t3)<<endl;
    cout<<get<3>(t3)<<endl;
    cout<<get<4>(t3)<<endl;
    cout<<get<5>(t3)<<endl;
    return EXIT_SUCCESS;
}
