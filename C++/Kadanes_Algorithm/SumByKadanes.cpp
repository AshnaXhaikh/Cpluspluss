#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> vec={3, -4, 5, 4, 7, -8};

    int maxSum = INT_MIN, currSum=0;
    for (int val: vec) {
        currSum += val;
        maxSum = max(currSum, maxSum);

        if (currSum < 0) {
            currSum=0;
        }
    }
    cout << "max sum = " << maxSum;

}