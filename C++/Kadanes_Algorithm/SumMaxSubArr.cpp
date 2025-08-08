#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> vec={3, -4, 5, 4, 7, -8};
    int size=vec.size();

    int maxSum = INT_MIN;
    // Calculate max sub array sum 
    for(int st=0; st < size; st++) {
        int currSum=0;
        for(int end=st; end < size; end++){
            currSum += vec[end];
            maxSum = max(maxSum, currSum);
        }
    }
    cout << "Maximun Sub Array Sum = " << maxSum;
    return 0;
}

// This logic finds the maximum sum of any contiguous subarray using Kadane’s Algorithm. It maintains a running sum (`currSum`) and updates the maximum sum seen so far (`maxSum`). For each element, it adds the value to `currSum` and compares it with `maxSum`. If `currSum` becomes negative, it resets to zero because a negative sum would reduce the total of any future subarray. In the end, `maxSum` holds the highest subarray sum found.
