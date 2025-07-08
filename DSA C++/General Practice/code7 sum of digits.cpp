#include <iostream>
using namespace std;

int main(){
    int sum=0;
    int num;
    cout<<"Enter Number to calculate sum of Digits:"<<endl;
    cin>>num;
    
    while(num>0) {
        
        sum += num % 10;
        num/=10;
    }
    cout << "Sum of Digits is:"<< sum << endl;
    return 0;
}
