#include<iostream>
#include<climits>
using namespace std;
void trap(int *heights, int n){
    int leftmax[20000];
    leftmax[0] = heights[0];
    cout << leftmax[0] << " ";
    for(int i = 1; i<n; i++){
        leftmax[i] = max(leftmax[i-1], heights[i-1]);
        cout<< leftmax[i] << " ";
    }
    cout << endl;
    int rightmax[20000];
    rightmax[n-1] = heights[n-1];
    for(int i=n-2; i>=0; i--){
        rightmax[i] = max(rightmax[i+1], heights[i+1]);
        cout << rightmax[i] << " ";
    }
    cout << rightmax[n-1] << " ";
    cout << endl;
    int watertrap =0;
    int currwater =0;
    for (int i = 0; i<n; i++){
        currwater = (min(leftmax[i], rightmax[i]) - heights[i]);
        if(currwater > 0){
            watertrap += currwater;
        }
    }
    cout << endl << "Water Trap = " << watertrap;
}
int main(){
    int heights[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(heights) / sizeof(int);
    trap(heights, n);
    return 0;
}