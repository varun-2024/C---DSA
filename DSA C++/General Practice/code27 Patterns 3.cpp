#include<iostream>
using namespace std;
int main(){
    int rows =0 , cols = 0;
    cout<<"Enter no. of Rows:"<<endl;
    cin>> rows;
    /* cout<< "Enter No. of Colums"<< endl;
    cin>> cols; */
    for(int i=rows; i>0; i--){
        for(int j=1; j<=i; j++){
            cout<<" * ";
        }
        cout << endl;
    }
    return 0;
}