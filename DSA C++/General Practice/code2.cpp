#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a, b;
    char d = 'E';
    bool isDone = true;
    float pi = 3.14159265359;
    double pi2 = 3.14159265359;
    cout<<"Enter A:";
    cin>>a;
    cout<<"Enter B:";
    cin>>b;
    cout<<a+b<<endl;
    cout<<setprecision(12)<<pi<<endl;
    cout<<setprecision(12)<<pi2<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(char)<<endl;
    cout<<sizeof(bool)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(double)<<endl;
    return 0;
}