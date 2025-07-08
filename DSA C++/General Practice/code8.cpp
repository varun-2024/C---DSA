#include <iostream>
using namespace std;

int main(){
    int sum=0;
    int num;
    int digit;
    char oddeven;
    cout<<"Enter Number to calculate sum of Digits:"<<endl;
    cin>>num;
    cout<<"Enter o for odd or e for even:" <<endl;
    cin>>oddeven;
    
    while(num>0) {
        
        digit = num % 10;

        if (oddeven == 'o'){
            if(digit%2!=0){
                sum += digit;
            }
        }

        if (oddeven == 'e'){
            if(digit%2==0){
                sum += digit;
            }
        }
        num/=10;
    }
    cout << "Sum of Digits is:"<< sum << endl;
    return 0;
}

