#include<iostream>
using namespace std;
int main(){
    int n=0;
    cout << "Enter the No. of Rows:" << endl;
    cin>> n;
    for(int i=1; i<=n; i++)
    {
        for( int j=1; j<=n-i; j++)
        {
            cout<< " ";
        }
        for( int j=i; j>=1; j--)
        {
            cout<< j;
        }
        for( int j=2; j<=i; j++)
        {
            cout<< j;
        }
        cout << endl;
    }
    return 0;
}