#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majority_Element(vector<int> nums){
    int n = nums.size();

    sort(nums.begin() , nums.end());

    int freq = 1, ans = nums[0];
    for (int i=0; i<n; i++) {
        if (nums[i] == nums[i-1]) {
            freq++;
        } else  {
            freq=1;
            ans = nums[i];
        }
        if (freq > n/2){
            return ans;
        } 
    }
    return -1;
}

int main() {
    vector<int> nums = {3, 4, 2};
    int result = majority_Element(nums);

    if (result != -1) { // -1 means no majority element
        cout << "Majority element: " << result << endl;
    } else {
        cout << "No majority element found." << endl;
    }
}
