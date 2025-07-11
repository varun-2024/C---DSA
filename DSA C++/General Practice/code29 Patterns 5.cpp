#include<iostream>
using namespace std;
int main(){
    int n=0;
    char ch = 'A';
    cout << "Enter N number for Rows: "<< endl;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<ch++;
        }
        cout<<endl;
    }
    return 0;
}