#include<iostream>
using namespace std;

int glo = 67;
void sun(){
    int a;
    cout<<glo;
}

int main(){
    // int a = 45;
    // int b = 40;
    int glo = 12;
    glo = 24;
    int a = 45 , b = 28;
    float pi = 3.14;
    char c = 'a';
    bool is_true = true;
    sun();
    // \n is a escape sequence character, for going in new line.
    // cout<<"This is class 4.\nThe value of a is "<<a<<".\nThe value of b is "<<b;
    // cout<<"\nThe value of pi is "<<pi ; 
    // cout<<"\nThe value of c is "<<c ; 
    cout<<"\n"<<glo ;
    cout<<"\n"<<is_true ;
    return 0;
}