#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num=0;
    cout<<"Enter a Number to Print Prime Number from 2 to Number:"<<endl;
    cin>>num;
    if(num <2 ){
        cout<<"Please Enter a Number Greater than 1"<<endl;
        return 0;
    } else{    
        for(int i=2; i<=num; i++){
        bool isPrime = true;
        for(int j=2; j<=sqrt(i); j++){
            if( i % j == 0 ){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout<<i<<endl;
        }
    }
}
    return 0;
}