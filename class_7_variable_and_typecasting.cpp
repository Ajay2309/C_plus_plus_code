// '::' --> Scope Resolution Operator.
# include<iostream>
using namespace std;
int c = 20;

int main(){
    // ***************** Build in Data Types ****************
    // int a, b, c ;
    // cout<<"Enter the value of a :"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b :"<<endl;
    // cin>>b;
    // c= a+b;
    // cout<<"The sum is "<<c<<endl ;
    // cout<<"The global sum is "<<::c ;

    // ***********float, double and long double Literals ************
    // float d = 13.4f;
    // long double e = 13.4l;
    // cout<<"The size of 13.4 is "<<sizeof(13.4)<<endl;
    // cout<<"The size of 13.4f is "<<sizeof(13.4f)<<endl;
    // cout<<"The size of 13.4F is "<<sizeof(13.4F)<<endl;
    // cout<<"The size of 13.4l is "<<sizeof(13.4l)<<endl;
    // cout<<"The size of 13.4L is "<<sizeof(13.4L)<<endl;
    // cout<<"The value of d is "<<d<<endl<<"The vlau of e is "<<e<<endl;

    // ***************** Reference Variable ****************
    // Devesh Tiwari --->  Dev -------> Tiwari
    // float x = 455;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    // ***************** TypeCasting ****************
    int a = 45;
    float b = 45.46;
    cout<<"the value of a is "<<float(a)<<endl;
    cout<<"the value of a is "<<(float)a<<endl;
    
    cout<<"the value of a is "<<int(a)<<endl;
    cout<<"the value of a is "<<(int)a<<endl;
    int c = int(b);

    cout<<"The expression is "<<(a + b )<<endl;
    cout<<"The expression is "<<(a + int(b) )<<endl;
    cout<<"The expression is "<<(a + (int)b )<<endl;


    

    return 0;
}