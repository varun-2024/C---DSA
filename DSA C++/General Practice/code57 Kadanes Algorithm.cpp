#include<iostream>
# include<climits>
using namespace std;
int subarrayKadanesAlgo(int *arr, int n){
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i = 0; i<n; i++)
    {
        currSum =currSum + arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum <0)
        {
            currSum =0;
        }
    }
    return maxSum;
}
int main(){
    int arr[] = {-1, -2, -3, -4};
    int n = sizeof(arr) / sizeof(int);
    cout<<subarrayKadanesAlgo(arr, n);
    return 0;
}