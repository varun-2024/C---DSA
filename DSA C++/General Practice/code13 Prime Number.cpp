#include<iostream>
using namespace std;

int main(){
    int num;
    bool isPrime = true;
    cout<<"Enter Number:"<<endl;
    cin>>num;
    for(int i=2; i<num-1; i++){
        if(num % i == 0 ){
            isPrime=false;
            break;
        }
    }
    if(isPrime){
        cout<<"It is a Prime Number";
    } else{
        cout<<"It is not a Prime Number";
    }
    return 0;
}