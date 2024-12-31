// There are two types of header files
// System header files : It comes with the compiler.
#include<iostream>
// User defined header files : It is written by the programmer.
// #include "this.h"


using namespace std;
int main(){
    int a=2, b= 5 ;
    cout<<"Operator in c++"<<endl;
    // following are the types of operator.
    cout<<"Airthmatic Operator...."<<endl;
    // Airthmatic Operator
    cout<<"The value of a + b is "<<a + b <<endl;
    cout<<"The value of a - b is "<<a - b <<endl;
    cout<<"The value of a * b is "<<a * b <<endl;
    cout<<"The value of a / b is "<<a / b <<endl;
    cout<<"The value of a % b is "<<a % b <<endl;
    cout<<"The value of a++ is "<<a++ <<endl;
    cout<<"The value of a-- is "<<a-- <<endl;
    cout<<"The value of ++a is "<<++a <<endl;
    cout<<"The value of --a is "<<--a <<endl;
    cout<<endl;

    // Assignment Operator --> Used to assign value to variable.
    // int a = 15 , b = 28 ;
    // char a = 'a';

    // Comparison Operator 
    cout<<"Comparison Operator......"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl ;
    cout<<"The value of a != b is "<<(a!=b)<<endl ;
    cout<<"The value of a > b is "<<(a>b)<<endl ;
    cout<<"The value of a < b is "<<(a<b)<<endl ;
    cout<<"The value of a >= b is "<<(a>=b)<<endl ;
    cout<<"The value of a <= b is "<<(a<=b)<<endl ;
    cout<<endl;

    // Logical Operator
    cout<<"Logical Operator........"<<endl;
    cout<<"The value of this locial and operator ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this locial or operator ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this locial not operator (!(a==b)) is "<<(!(a==b))<<endl;
    return 0;
}