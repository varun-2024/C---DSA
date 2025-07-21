#include<iostream>
using namespace std;
void changeA(int a){
    a=25;
    cout<<a<<endl;
}
void changeA(int *ptr)
{
    *ptr = 10;
    cout<<*ptr<<endl;
}
void changeB(int &ref){
    ref = 50;
    cout<< ref << endl;
}
int main()
{
    int a=5;
    int &b = a;
    changeA(a);
    changeA(&b);
    changeB(b);
    cout<< a <<" "<< b <<endl;
    return 0;
}