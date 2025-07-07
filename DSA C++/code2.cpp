#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a= 5, b=10;
    char d = 'E';
    bool isDone = true;
    float pi = 3.14159265359;
    double pi2 = 3.14159265359;
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