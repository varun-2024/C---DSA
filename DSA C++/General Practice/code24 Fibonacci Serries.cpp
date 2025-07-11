#include<iostream>
using namespace std;
int main() {
    int num = 0;
    cout << "Enter a number to print its Fibonacci Series up to that value:" << endl;
    cin >> num;
    if (num==0){
        cout << "Fibonacci Serries for 0 is:"<<0<<endl;
        return 0;
    } else if (num == 1){
        cout << "Fibonacci Serries for 1 is:"<< 0 <<", "<< 1 <<endl;
        return 0;
    }
    int a= 0, b=1;
    cout<< a << "  "<< b << "  ";
    while(true){
        int next = a + b;
        if (next > num){
            break;
        }
        cout << next << "  ";
        a = b;
        b = next;
    }
    return 0;
}