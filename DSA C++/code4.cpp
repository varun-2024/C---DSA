#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "To check if a Number is Odd or Even";
    cout << "Enter Number:";
    cin >> num;
    if (num % 2 ==0){
        cout<< "Number is Even";
    } else{
        cout << "Number is Odd";
    }

    return 0;
}

