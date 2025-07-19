#include<iostream>
using namespace std;

void printHello(){
    cout<< "Hello World"<< endl;
}
int addition(int a, int b);

int main(){
    printHello();
    cout<<addition(5,10);
    return 0;
}

int addition(int a, int b){
    return a+b;
}