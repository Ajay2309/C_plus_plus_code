#include<iostream>
using namespace std;

// function prototype
// type function_name(arguments);
// int sum(int a, int b);      // ----> acceptable
// int sum(int a, b);      // ----> not acceptable
int sum(int, int);      // ----> acceptable
// void g(void);      // ----> acceptable
void g();      // ----> acceptable


int main(){
    int num1, num2 ;
    cout<<"Enter first number : "<<endl;
    cin>>num1;
    cout<<"Enter second number : "<<endl;
    cin>>num2;
    // num1 and num2 are actual parameter.
    cout<<"The sum is "<<sum(num1,num2);
    g();
    return 0;
}

int sum(int a , int b){
    /*Formal parameter a and b will be taking value from
    actual parameter num1 and num 2.*/
    int c = a + b ;
    return c;
}

void g(){
    cout<<"\nHello, Good Morning";
}