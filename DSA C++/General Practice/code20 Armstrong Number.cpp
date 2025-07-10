#include<iostream>
using namespace std;
int main(){
    int num=0, n=0, digit=0, cube=0, sum=0;
    cout<<"Enter Number:"<<endl;
    cin>>num;
    n=num;
    while(num>0){
        digit = num%10;
        cout<<"Digit:"<<digit<<endl;
        cube = digit * digit * digit;
        cout<<"Cube of Digit:"<<digit<<"\nCube is :"<<cube<<endl;
        num = num/10;
        cout<<"Number after division:"<<num<<endl;
        sum = sum + cube;
        cout<<"Sum of Cube so far:"<<sum<<endl;
    }
if(sum == n){
cout<<"Number is Armstrong Number!"<<endl;
} else {
    cout<<"Number is Not an Armstrong Number!"<<endl;
}
    return 0;
}