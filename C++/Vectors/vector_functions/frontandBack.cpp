// front.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Vector elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Access and print the first element
    cout << "The first element is: " << numbers.front() << endl;
    cout << "The last element is: " << numbers.back() << endl;

    return 0;
}
