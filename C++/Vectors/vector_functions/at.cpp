// at.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {5, 10, 15, 20, 25};

    cout << "Vector elements using at():\n";
    for (int i = 0; i < numbers.size(); i++) {
        cout << "Element at index " << i << " is: " << numbers.at(i) << endl;
    }

    return 0;
}
