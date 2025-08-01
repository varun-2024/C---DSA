#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for(int i =1; i<nums.size(); i++){
        if(nums[i-1] == nums[i]){
            return true;
        }
    }
    return false;
}
int main(){
    vector<int> nums= {1,2,3,4};
    vector<int> nums2= {1,1,1,3,3,3,4,3,2,4,2};
    cout<< containsDuplicate(nums) << endl;
    cout << containsDuplicate(nums2) << endl;
    return 0;
}
// Solution thinking we need to count atleast two more occurrences after the first occurrence
/* #include<iostream>
using namespace std;
bool repeat(int *arr, int n){
    int checkrepeat;
    int count = 0;
    for(int i=0; i<n; i++){
        checkrepeat = arr[i];
        for(int j= i+1; j< n; j++)
        if(checkrepeat == arr[j]){
            count++;
        }
    }
if(count > 2){
    return true;
}
return false;
}
int main(){
    int nums[] = {1,2,3,4};
    int nums2[] = {1,1,1,3,3,4,3,2,4,2};
    int n1 = sizeof(nums) / sizeof(int);
    int n2 = sizeof(nums2) / sizeof(int);
    cout<< repeat(nums, n1) << endl;
    cout << repeat(nums2, n2) << endl;
    return 0;
} */