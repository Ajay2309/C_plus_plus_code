#include<iostream>
using namespace std;

typedef struct employee
{
    int eid;
    char character;
    float salary;
}ep;
 
union money
{
    int rupee;
    char car;
    float pound;
};

int main(){
    ep ajay;
    struct employee hardik;
    struct employee rohan;
    ajay.eid = 01;
    ajay.character = 'a';
    ajay.salary = 120000000;

    cout<<"the value is "<<ajay.eid<<endl;
    cout<<"the value is "<<ajay.character<<endl;
    cout<<"the value is "<<ajay.salary<<endl; 

    union money m1;
    m1.rupee = 34;
    // m1.car = 'c';  // we can use only one data type at a time...

    cout<<m1.rupee;

    // enum meal{ breakfast, lunch, dinner};
    // meal m1 = lunch;

    // cout<<m1;
    

    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;

    return 0;
}