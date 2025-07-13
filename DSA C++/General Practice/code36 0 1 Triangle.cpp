#include<iostream>
using namespace std;
int main()
{
    int n=0;
    bool isSwitch = true;
    cout<< "Enter number of Rows:" << endl;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for (int j = 1; j<= i; j++)
        {
            cout << isSwitch;
            isSwitch = !isSwitch;
        }
        cout << endl;
    }
    return 0;
}