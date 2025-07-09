#include <iostream>
using namespace std;
int main(){
    int num, res=0;
    cout<<"Enter Number :"<<endl;
    cin>>num;
    
    while(num>0) {
        cout<<(num % 10);
        res= (res*10) + (num%10);
        num/=10;
    }
    cout<<endl;
    cout<<"Result :"<<res<<endl;
    return 0;
}
