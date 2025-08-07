#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    vector<char> letters = {'A', 'B', 'C', 'D'};

    // Printing size and elements of integer vector
    cout << "Size of numbers vector: " << numbers.size() << endl;
    for (int i = 0; i < numbers.size(); ++i) {
        cout << "Element at index " << i << ": " << numbers[i] << endl;
    }

    cout << endl;

    // Printing size and elements of char vector
    cout << "Size of letters vector: " << letters.size() << endl;
    for (int i = 0; i < letters.size(); i++) {
        cout << "Element at index " << i << ": " << letters[i] << endl;
    }

    return 0;
}
