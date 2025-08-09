#include <iostream>
#include <vector> 
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n - 1;

    while (i < j) {
        int pSum = nums[i] + nums[j];
        if (pSum > target){
            j--;
        } else if (pSum < target) {
            i++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main() {
    vector<int> vec={1,2, 3, 4, 5, 8};
    int target = 8;
    
    vector<int> ans = pairSum(vec, target);
    cout << ans[0] << ", " << ans[1] << endl;

    
    return 0;
}