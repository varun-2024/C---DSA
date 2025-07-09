#include<iostream>
using namespace std;
int main(){
    int i=0;
    while(i<=5){
        if(i==3){
            i++;
            continue;
        }
        cout<<i<<endl;
        i++;
    }
    cout<<"Out of Loop 1 Now"<<endl;
    for(i=0;i<=5; i++){
        if(i==3){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}