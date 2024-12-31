#include<iostream>
using namespace std;

int sum(float a, int b ){
    cout<<"Using function with 2 argument"<<endl;
    return a+b;
}
int sum(int a, int b, int c ){
    cout<<"Using function with 3 argument"<<endl;
    return a+b+c;
}
// To calculate the volume of cube.
int volume(int a){
    return (a*a*a);
}
// To calculate the volume of cylinder.
int volume(double r, int h){
    return(3.14 * r*r * h);
}
// To calculate the volume of rectengular box.
int volume(int l, int b, int h){
    return (l * b * h);
}

int main(){
    cout<<"The sum of 3 and 5 is "<<sum(3,5)<<endl<<endl;
    cout<<"The sum of 3,5 and 8 is "<<sum(3,5,8)<<endl;
    cout<<"The volume of cube with age 2 is "<<volume(2)<<endl;
    cout<<"The volume of cylinder with radius 3 and hight 5 is "<<volume(3,5)<<endl;
    cout<<"The volume of rectengular box with 3, 5 and 2 is "<<volume(3,5,2)<<endl;
    return 0;
}