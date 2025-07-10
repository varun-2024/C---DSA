#include <iostream>
using namespace std;
int main(){
    int num, fact=1;
    cout<<"Enter Number between 1-10 to calculate Factorial:"<< endl;
    cin>> num;
    if (num < 0) {
        cout<<"You entered a Negitive number, please enter a positive number!"<<endl;
    } else if(num == 0){
        cout<<"Factorial of 0 is 1."<<endl;
    } else if( num > 10){
        cout<< "Please try again and Enter a Number between 1-10!"<<endl;
    } else {
        for(int i=num; i>0; i--){
            fact = fact * i;
            }
        cout<<"Factorial of Number "<< num<< " is : "<< fact<<endl;
    }
    return 0;
}