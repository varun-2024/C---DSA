#include<iostream>
using namespace std;

int main(){
    float radius, area;
    const float PI = 3.14159;
    cout<<"Enter Radius :"<<endl;
    cin>>radius;
    area = PI * radius * radius;
    cout<<"Area of the Circle is :"<<area<<endl;
    return 0;
}