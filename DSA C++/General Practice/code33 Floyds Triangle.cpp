#include<iostream>
using namespace std;
int main() {
    int n=0, count=1;
    cout<<"Enter the Number of Rows: "<< endl;
    cin >> n;
    for (int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << count <<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}