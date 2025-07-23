#include<iostream>
#include<climits>
using namespace std;
int subarraySum (int *arr, int n)
{
    int maxSum = INT_MIN;
    for(int start =0; start < n; start ++)
    {
        for(int end = start; end < n; end ++)
        {
            int currSum = 0;
            for (int i= start; i<=end; i++)
            {
                cout << arr[i] << " ";
                currSum = currSum + arr[i];
            }
            cout << "," << " and its sum is : "<< currSum << "\n";
            maxSum = max(maxSum, currSum);
        }
        cout << endl;
    }
    return maxSum;
}
int main(){
    int arr[] = {-1, -2, -3, -4};
    int n = sizeof(arr) / sizeof(int);
    cout<< subarraySum(arr, n);
    return 0;
}