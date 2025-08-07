#include <iostream>
#include <utility>
using namespace std;

pair<int, int> arrSumProd(int arr[], int sz) {
    int sum=0, prod=1;
    // for (int i=0; i<sz; i++) {
    //     sum += arr[i];
    //     prod *= arr[i];
    // }
    // return {sum, prod};

    int i=0;
    while (i < sz) {
        sum += arr[i];
        prod *= arr[i];
        i++;
    }
    return {sum, prod};
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size=5;

    pair<int, int> result = arrSumProd(arr, size);
    cout << "Sum = " << result.first << " Product = " << result.second << endl;

    return 0;
}