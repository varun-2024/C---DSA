#include<iostream>
using namespace std;
int main(){
    int rows =0 , cols = 0;
    cout<<"Enter no. of Rows:"<<endl;
    cin>> rows;
    /* cout<< "Enter No. of Colums"<< endl;
    cin>> cols; */
    int n = rows;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<" * ";
        }
        cout << endl;
    }
    return 0;
}