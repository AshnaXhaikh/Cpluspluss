#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter you age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote.\n" << "bcz you're: " << age << endl;
    } else {
        cout << "you are not eligible to vote.\n" << "bcz you're: " << age << endl;
    }
    return 0;
}