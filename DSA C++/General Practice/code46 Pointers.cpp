#include<iostream>
using namespace std;
void changeA(int *ptr)
{
    *ptr = 10;
}
int main()
{
    int a=5;
    changeA(&a);
    cout<<a;
    return 0;
}