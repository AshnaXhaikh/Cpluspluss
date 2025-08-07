// popback.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Original vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Remove the last element
    numbers.pop_back();

    cout << "After pop_back(): ";
    for (int num : numbers) {
        cout << num << " ";
    }

    cout << "element at index 2: " << numbers.at(2);
    cout << endl;

    return 0;
}
