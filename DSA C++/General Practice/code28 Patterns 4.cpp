#include<iostream>
using namespace std;
int main(){
    int n =0;
    cout<<"Enter no. of Rows:"<<endl;
    cin>> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<" * ";
        }
        cout << endl;
    }
    return 0;
}