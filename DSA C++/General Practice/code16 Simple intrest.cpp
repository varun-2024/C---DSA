#include<iostream>
using namespace std;
int main(){
    float p=0, r=0, t=0, intrest=0, tax=0, final=0;
    cout<<"Enter Principal Amount:"<<endl;
    cin>>p;
    cout<<"Enter Rate Amount:"<<endl;
    cin>>r;
    cout<<"Enter Time:"<<endl;
    cin>>t;
    intrest = ((p * r * t) / 100);
    tax = (intrest) * (20.0/100.0);
    final = intrest - tax;
    //intrest = ((p * r * t) / 100) - (((p * r * t) / 100)*(20.0/100.0));
    cout<<"Intrest Amout is :"<<final<<endl;
    return 0;
}