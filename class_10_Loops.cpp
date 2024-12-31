#include<iostream>
using namespace std;

int main(){
    /*Loops in C++
    There are three types of loops in C++
        1. for loop
        2. while loop
        3. do while loop*/

    // ********for loop*********
    /*Syntax
    */

    // for (int i = 1 ; i <=20 ; i++)
    // {
    //     cout<<i<<endl;
    // }
    
    // // ***********while loop********
    // int i =1 ;
    // while(i <= 40)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    
    // // ********do while loop********
    // int i = 1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i<20);

    // writting table of 6.
    int i = 1;
    do{
        cout<<"6 x "<<i<<" = "<<(i*6)<<endl;
        i++;
    }while(i<=10);

    
    return 0;
}