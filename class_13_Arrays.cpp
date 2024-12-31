#include<iostream>
using namespace std;

int main(){
    int marks[] = {55,58,76,98};
    int mathsmark[4];
    mathsmark[0] = 46;
    mathsmark[1] = 79;
    mathsmark[2] = 19;
    mathsmark[3] = 49;

    // we can change the value of an array.
    marks[2] = 456;
    cout<<"This is maths"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    cout<<"\nThis is mathsmarks"<<endl;
    cout<<mathsmark[0]<<endl;
    cout<<mathsmark[1]<<endl;
    cout<<mathsmark[2]<<endl;
    cout<<mathsmark[3]<<endl;

    // // printing marks with the help of for loop.
    // for (int i = 0; i<4 ; i++){
    //     cout<<"\nthe value of maths marks is "<<mathsmark[i]<<endl;
    // }

    // int i = 0;
    // while(i<4){
    //     cout<<"The value of math marks is "<<mathsmark[i]<<endl;
    //     i++;
    // }


    // int i = 0;
    // do{
    //     cout<<"The value of math marks is "<<mathsmark[i]<<endl;
    //     i++;
    // }while(i<4);

    cout<<"\n**********ponters and Arrays***********"<<endl;
// formula of pointer airthmatic...
// new pointer = current pointer + 1 * size(data type)

    int* p = mathsmark;
    // cout<<*p<<endl;
    // cout<<*p++<<endl;
    // cout<<*p<<endl;
    // cout<<*++p<<endl;

    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    
    return 0;
}