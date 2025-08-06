#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[] = {3, 2 , 5, 34, 6, -1, -4};
    int size=7;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i=0; i<size; i++) {
        // if (nums[i] < smallest){
        //     smallest = nums[i];
        // }
        // using builtin function
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }


    cout << " smallest no: " << smallest << endl;
    cout << " largest no: " << largest << endl;
    return 0;
}