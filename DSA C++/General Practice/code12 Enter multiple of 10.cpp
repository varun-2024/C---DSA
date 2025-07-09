#include<iostream>
using namespace std;
int main(){
    int num;
    do{
        cout<<"Enter Number:"<<endl;
        cin>>num;
        if(num % 10 == 0){
            break;
        }
        cout<<"You Entered:"<<num<<endl<<"wrong choice, Try again."<<endl;
        cout<<"Enter multiple of 10"<<endl;
    } while(true);
    cout<<"Out of First Loop"<<endl;
    do{
        cout<<"Enter Number:"<<endl;
        cin>>num;
        if(num==0){
            break;
        }
        if(num % 10 == 0){
            continue;
        }
        cout<<"You Entered:"<<num<<endl<<"wrong choice, Try again."<<endl;
        cout<<"Enter 0 to exit"<<endl;
    } while(true);
    cout<<"Out of Second Loop"<<endl;
    return 0;
}