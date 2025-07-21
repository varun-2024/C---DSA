#include<iostream>
using namespace std;
int main()
{
    int a= 32;
    int *ptr = &a; // Stores A's Address
    char ch ='A'; // ASCII is 65
    char &cho = ch; // Stores Ch Refrence
    cho+= a; // cho = 65 + 32 ('A' + 32) = 97
    *ptr+= ch;  /* *ptr/a = 32 + 97 = 129 ( a=32, ch becomes 97 in previous line because ch and &cho are refrence for ch diffrent name for same variable) */
    cout<< a << " " << ch << endl;
    return 0;
}