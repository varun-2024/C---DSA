#include<iostream>
using namespace std;

void binToDec (int binNum){
    int n = binNum;
    int decNum =0;
    int pow = 1;
    while(n>0){
        int lastDig = n%10;
        decNum = decNum + (lastDig * pow);
        pow = pow * 2;
        n=n/10;
    }
    cout<< decNum << endl;
}
void decToBin (int decNum){
    int n = decNum;
    int binNum =0;
    int pow = 1;
    while(n>0){
        int lastDig = n%2;
        binNum = binNum + (lastDig * pow);
        pow = pow * 10;
        n=n/2;
    }
    cout<< binNum<< endl;
}
int main()
{
    int binNum, decNum;
    cout << "Enter Binary Number: " << endl;
    cin>> binNum;
    cout<<endl;
    cout<< "Enter Decimal Number: " << endl;
    cin>> decNum;
    binToDec(binNum);
    decToBin(decNum);
    return 0;
}

/* #include<iostream>
using namespace std;

void binToDec (int binNum){
    int n = binNum;
    int decNum =0;
    int pow = 1;
    while(n>0){
        int lastDig = n % 10;
        decNum = decNum + (lastDig * pow);
        pow=pow*2;
        n=n/10;
    }
    cout<< decNum;
}
int main()
{
    int binNum;
    cout << "Enter Binary Number: " << endl;
    cin>> binNum;
    cout<<endl;
    binToDec(101);
    return 0;
} */