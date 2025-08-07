#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;

    cout << "size = " << vec.size() << endl;

    vec.push_back(24);
    vec.push_back(12);
    vec.push_back(32);

    for (int val: vec) {
        cout << val << endl;
    }

    cout << "after push back size = " << vec.size() << endl;
    return 0;
}