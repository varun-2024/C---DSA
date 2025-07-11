#include<iostream>
using namespace std;
int main(){
    int num;
    cout<< "Enter a Number to print its Table:"<<endl;
    cin >>num;
    if(num ==0 || num <0 ){
        cout<<"Please Enter a Positive Number!"<<endl;
    } else{
        for(int i=1; i<=10; i++){
            cout<<num<<" X "<< i << " = "<< num * i <<endl;
        }
    }
    return 0;
}