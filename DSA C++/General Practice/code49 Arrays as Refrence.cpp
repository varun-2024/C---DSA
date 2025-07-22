#include<iostream>
using namespace std;
void printArr(int num[]){
    int n = sizeof(num) / sizeof(int);
    for (int i=0; i<n; i++)
    {
        cout<<num[i]<<" , ";
    }
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    printArr(arr);
    return 0;
}