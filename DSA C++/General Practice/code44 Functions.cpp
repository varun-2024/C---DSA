#include<iostream>
using namespace std;

void printHello(){
    cout<< "Hello World"<< endl;
}
int addition(int a=3, int b=2);
double addition(double a, double b);
double addition(double a, double b, double c);

int main(){
    printHello();
    cout<<addition(5)<<endl;

    cout<<addition(3.9, 2.4)<<endl;;

    cout<<addition(3.9, 2.4, 1.2)<<endl;;
    return 0;
}

int addition(int a, int b){
    return a+b;
}
double addition(double a, double b){
    return a+b;
}
double addition(double a, double b, double c){
    return a+b+c;
}