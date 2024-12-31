#include<iostream>
using namespace std;

int sum(int a , int b)
{
    int c = a + b;
    return c;
}

// This will not swap a and b 
// void swap(int a , int b )
// {                     //  temp    a   b
//     int temp = a ;    //    4     4   5
//     a = b;            //    4     5   5
//     b = temp;         //    4     5   4
// }

// call by reference using pointers.
void swappointer(int* a , int* b )
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// // call by reference using C++ reference variable.
void swapreferencevar(int &a , int &b )
{                     //  temp    a   b
    int temp = a ;    //    4     4   5
    a = b;            //    4     5   5
    b = temp;         //    4     5   4
}

// this will change the value of a .
// int & swapreferencevar(int &a , int &b )
// {                     //  temp    a   b
//     int temp = a ;    //    4     4   5
//     a = b;            //    4     5   5
//     b = temp;         //    4     5   4
//     return a;         
// }

int main(){
    cout<<"The sum of 5 and 6 is "<<sum(5,6)<<endl;

    int a = 4 , b = 5;

    cout<<"The value of a is "<<a<<" & "<<"The value of b is "<<b<<endl;
    // swap(a,b);   //this will not swap a and b
    // swappointer(&a,&b);     //this will swap a and b using pointer reference.

    swapreferencevar(a,b);  // this will swap a and b using reference variable.
 
    // swapreferencevar(a,b) = 455;  // this will swap a and b using reference variable.
    
    cout<<"The value of a is "<<a<<" & "<<"The value of b is "<<b<<endl;
    return 0;
}

