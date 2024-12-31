#include<iostream>
using namespace std;

int main(){
    // // Selection Controll Structure : if-else if-else ladder .
    // int age ;
    // cout<<"Enter Your Age :"<<endl;
    // cin>>age;
    // if(age<13){
    //     cout<<"You are a child"<<endl;
    // }
    // else if (age<20){
    //     cout<<"You are a teenager"<<endl;
    // }
    // else{
    //     cout<<"You are an Adult"<<endl;
    // }

     // Selection Controll Structure : Switch Case statement.
    int age ;
    cout<<"Enter Your Age :"<<endl;
    cin>>age;
     switch (age)
     {
     case 18:
        cout<<"Your age is 18"<<endl;
        break;
    case 12:
        cout<<"Your age is 12"<<endl;
        break;
    case 2:
        cout<<"Your age is 2"<<endl;
     
     default:
        cout<<"No special cases"<<endl;
        break;
     }
    cout<<"Done with switch cases";

    return 0;
}
