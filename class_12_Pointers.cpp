#include<iostream>
using namespace std;

int main(){
    // Pointers --> Data types which holds the address of other data types.

    int a = 23;
    int* b = &a;

    //  & --> (Address of ) operator
    cout<<"address of a is : "<<b<<endl;
    cout<<"address of a is : "<<&a<<endl;

    // * --> (value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;
    
    // pointer to pointer
    int** c = &b;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address of b is "<<c<<endl;
    cout<<"the value at address c is "<<*c<<endl;
    cout<<"the value at address value_at(value_at (c)) is "<<**c<<endl;
    return 0;
}