#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a = 4;
    // cout<<"The value of a was "<<a<<endl;
    // a = 10;
    // cout<<"The value of a is "<<a<<endl;

    // // Constants in C++..........
    // const int b = 12;
    // cout<<"The vlaue of b is "<<b<<endl;
    // // a = 10;   // Cannot able to change the constant.

    // ******manipulator in C++*******
    // manipulator like...endl and setw.
    int a = 4, b= 45, c = 4526;
    cout<<"The value of a without setw is "<<a<<endl;
    cout<<"The value of b without setw is "<<b<<endl;
    cout<<"The value of c without setw is "<<c<<endl;

    cout<<"The value of a is "<<setw(4)<<a<<endl;
    cout<<"The value of b is "<<setw(4)<<b<<endl;
    cout<<"The value of c is "<<setw(4)<<c<<endl;

    // **********Operator Precedance**********
    // int c = (8*6)+6;
    // int c = ((((8*6)+6)-5)+8);
    // cout<<c;


    

    return 0;
}