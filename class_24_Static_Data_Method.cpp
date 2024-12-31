#include<iostream>
using namespace std;

class employee{
    int Id;
    static int count;
    public:
    void setData(void){
        cout<<"Enter the Id "<<endl;
        cin>>Id;
        count++; 
    }
    void getData(void){
        cout<<"The id of the Employee is "<<Id<<" and this is employee number "<<count<<endl;
    }
    static void getCount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};


int employee::count; // Default value is 0.

int main(){
    employee ajay,rohan,dev;
    ajay.setData();
    ajay.getData();
    employee::getCount();
    rohan.setData();
    rohan.getData();
    employee::getCount();
    
    dev.setData();
    dev.getData();
    employee::getCount();
    
    return 0;
}