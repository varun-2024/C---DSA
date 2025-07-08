#include<iostream>
using namespace std;

int main(){

    int n, sum =0;
    cout << "Enter N:"<<endl;
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        sum+=i;
    }
    cout << "Value of Sum is :"<<sum<<endl;

    cout<< "Second Method:"<< ((n*(n+1))/2)<<endl;

    return 0;
}