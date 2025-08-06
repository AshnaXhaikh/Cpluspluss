#include <iostream>
#include <climits>
#include <utility> // for pair
using namespace std;

pair<int, int> findMinMax() {
    int nums[] = {3, 2, 5, 34, 6, -1, -4};
    int size = 7;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++) {
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }
    return {smallest, largest}; // return as pair
}

int main() {
    pair<int, int> result = findMinMax();
    cout << "Smallest number: " << result.first << endl;
    cout << "Largest number: " << result.second << endl;
    return 0;
}
