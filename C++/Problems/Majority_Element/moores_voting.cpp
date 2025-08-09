#include <iostream>
#include <vector>
using namespace std;

int MooresVoting(vector<int> vec) {

    int freq = 0, ans = 0;

    int n=vec.size();
    for (int i=0; i<n; i++){
        if (freq == 0){
            ans = vec[i];
        } 
        if (ans == vec[i]){
            freq++;
        } else {
            freq--;
        }
    }
    
    int count = 0;
    for (int val: vec){
        if (val == ans){
            count++;
        }
    }
    if (count > n/2) {
        return ans;
    }
    else {
        return -1;
    }
}
 

int main() {
    vector<int> nums1 = {3, 3, 4, 2, 3, 3, 3};
    vector<int> nums2 = {1, 2, 3, 4, 5}; // no majority element

    int result1 = MooresVoting(nums1);
    cout << "Result for nums1: ";
    if (result1 != -1) {
        cout << result1 << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    int result2 = MooresVoting(nums2);
    cout << "Result for nums2: ";
    if (result2 != -1) {
        cout << result2 << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}
