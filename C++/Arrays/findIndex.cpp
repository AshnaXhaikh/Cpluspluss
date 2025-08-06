#include <iostream>
using namespace std;
#include <climits>

int main() {
    int nums[] = {3, 2 , 5, 34, 6, -1, -4};
    int size=7;

    int smallest = INT_MAX;
    int index = -1;
    
    for (int i=0; i<size; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
            index = i;
        }
    }

    cout << "\nsmallest no = " << smallest << endl;
    cout << "Index = " << index << endl;
    return 0;
}