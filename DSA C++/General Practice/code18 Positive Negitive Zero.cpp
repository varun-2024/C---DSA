#include<iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number:"<<endl;
    cin>>num;
    if(num>0){
        cout<<"The Number is Positive."<<endl;
    } else if(num<0){
        cout<<"The Number is Negative."<<endl;
    } else{
        cout<<"The Number is Zero."<<endl;
    }
    return 0;
}