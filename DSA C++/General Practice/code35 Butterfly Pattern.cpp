#include<iostream>
using namespace std;
int main(){
    int n =0;
    cout << "Enter the number of Rows:" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            cout << " * "; //Star
        }
        for (int j = 1; j<= (2 * (n - i)); j++)
        {
            cout<< "   "; // Space
        }
        for (int j = 1; j<=i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j<=i; j++)
        {
            cout << " * "; //Star
        }
        for (int j = 1; j<= (2 * (n - i)); j++)
        {
            cout<< "   "; // Space
        }
        for (int j = 1; j<=i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}