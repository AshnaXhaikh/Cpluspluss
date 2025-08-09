#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> nums){
    int n = nums.size();

    for (int val : nums){
        int freq=0;

        for (int el : nums){
            if (el == val){
                freq++;
            }
        }

        if (freq > n/2){
            return val; // return majority element
        }
    }    
    return -1; // if no majority element
}

int main() {
    vector<int> nums = {3, 4, 2, 3, 3, 3};
    int result = majorityElement(nums);

    if (result != -1) { // -1 means no majority element
        cout << "Majority element: " << result << endl;
    } else {
        cout << "No majority element found." << endl;
    }
}
