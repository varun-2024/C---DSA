#include<iostream>
using namespace std;
int main(){
    int n =0;
    cout<<"Enter no. of Rows:"<<endl;
    cin>> n;
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n-1; j++){
            cout<< "   "; // Space
        }
        for(int j=1; j<=n; j++){
            cout<< " * "; // Star
        }
        cout << endl; // Last Star
    }
    return 0;
}