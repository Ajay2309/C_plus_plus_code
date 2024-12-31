#include<iostream>
using namespace std;

int glo = 5;
void sum(){
    int a = 34;
    cout<<a;
}

int sum(int a, int b){
    int add= a+b;
    return add;
}

void run(){
    char a = 'A';
    // return a;
    cout<<a<<endl;
}
int main(){
    // int glo = 10;
    int a = 23;
    cout<<"The value of a is "<<a<<endl;
    cout<<"glo = "<<glo<<endl;
    sum();
    cout<<"\n";
    cout<<sum(2,2)<<endl;
    run();

    return 0;

}