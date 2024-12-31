#include<iostream>
using namespace std;

inline int product(int a, int b){
    return a*b;
}
// int product(int a, int b){
//     // it is not recomended to use inline function with static.
//     static int c=0;     // executes only once
//     c = c + 1;          // next time this function will run, the value will retained 
//     return a*b+c;
// }

float MoneyRecieved (int currentMoney, float factor = 1.04){
    return currentMoney * factor;
}

// int strlen(const char *p){}

int main(){
    // int a,b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;

    int money = 100000;
    cout<<"If you have "<<money<<" in your account, you will recieve "<<MoneyRecieved(money)<<
    " rupees after 1 year"<<endl;
    cout<<"For VIP : If you have "<<money<<"in your account, you will recieve "<<
    MoneyRecieved(money, 1.1)<<"rupees after 1 year"<<endl;
    
    return 0;
}