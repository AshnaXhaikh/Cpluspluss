#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Creating vectors
    vector<int> nums1 = {1, 2, 3, 4};          // Using initializer list
    vector<int> nums2(3, 2);                   // 3 elements, each of value 2

    vector<char> chars1 = {'a', 'b', 'c'};     // Using initializer list
    vector<char> chars2(4, 'x');               // 4 elements, each of 'x'

    // For-each loop for vector<int>
    cout << "nums1: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << "\nnums2: ";
    for (int num : nums2) {
        cout << num << " ";
    }

    // For-each loop for vector<char>
    cout << "\nchars1: ";
    for (char ch : chars1) {
        cout << ch << " ";
    }
    cout << "\nchars2: ";
    for (char ch : chars2) {
        cout << ch << " ";
    }

    return 0;
}
