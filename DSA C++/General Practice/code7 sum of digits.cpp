#include<iostream>
using namespace std;

int main(){
    int sum =0, num=10829;
    while(num>0) {
        
        sum += num % 10;
        num/=10;
    }
    cout << "Sum of Digits is:"<< sum << endl;
    return 0;
}
