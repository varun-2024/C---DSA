#include<iostream>
#include <climits>
using namespace std;
int maxProfit(int *prices, int n){
    int bestbuy[100000];
    int maxProfit = 0, currProfit =0;
    bestbuy[0] = INT_MAX;
    for(int i=1; i < n ; i++ ){
        bestbuy[i] = min(bestbuy[i-1], prices[i-1]);
        cout << bestbuy[i] << " ";
    }
    for(int i =0; i<n; i++)
    {
        currProfit = prices[i] - bestbuy[i];
        maxProfit = max(maxProfit, currProfit);
    }
    return maxProfit;
}
int main (){
    int prices[6] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(int);
    cout << "\nMaximum Profit is :" <<maxProfit(prices, n);
    return 0;
}