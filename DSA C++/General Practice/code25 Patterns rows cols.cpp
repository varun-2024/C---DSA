#include<iostream>
using namespace std;
int main(){
    int rows =0 , cols = 0;
    cout<<"Enter no. of Rows:"<<endl;
    cin>> rows;
    cout<< "Enter No. of Colums"<< endl;
    cin>> cols;
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=cols; j++){
            cout<<i;
        }
        cout << endl;
    }
    return 0;
}