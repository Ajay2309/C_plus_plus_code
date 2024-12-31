#include<iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1
        ;
    }
    return fib(n-1) + fib(n-2);
}

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
}
// Step by step calculation of factorial(4).
// factorial(4) = 4 * factorial(3);
// factorial(4) = 4 * 3 *factorial(2);
// factorial(4) = 4 * 3 * 2 *factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24;

int main(){
    // Factorial of a number.
    // 5! = 5 * 4 * 3 * 2 * 1 = 120
    // 0! = 1 by defination
    // 1! = 1 by defination
    // n! = n * (n-1)!

    int a;
    cout<<"Enter a number : ";
    cin>>a;
    // cout<<"The Factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"The term in fibonacci sequence at possion "<<a<<" is "<<fib(a)<<endl;

    return 0;
}