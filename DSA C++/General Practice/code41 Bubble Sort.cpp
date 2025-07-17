#include<iostream>
using namespace std;
void print(int arr[], int n)
{
    for(int i =0; i < n; i++)
    {
        cout<< arr[i]<< " ";
    }
}
void bubbleSort(int arr[], int n)
{
    for(int i =0; i< n-1; i++)
    {
        cout<<"value of i: "<<i<< endl;
        for(int j = 0; j<n-i-1; j++)
        {
            cout<<"value of j: "<<j<< endl;
            if(arr[j] > arr[j+1])
            {
                cout<< "Swapping arr[j] : "<< arr[j] << " with arr[j+1] : "<< arr[j+1]<< endl;
                swap(arr[j], arr[j+1]);
            }
            cout<< endl;
        }
        cout<<endl;
    }
}
int main()
{
    int n=5;
    int arr[5] = {5, 4, 1, 3, 2};
    bubbleSort(arr, 5);
    print(arr, 5);
    return 0;
}