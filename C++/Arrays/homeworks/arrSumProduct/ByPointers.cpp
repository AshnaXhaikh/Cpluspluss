#include <iostream>
using namespace std;

void arrSumProd(int arr[], int sz, int* sum, int* prod) {
    *sum = 0;
    *prod = 1;

    int i = 0;
    while (i < sz) {
        *sum += arr[i];
        *prod *= arr[i];
        i++;
    }
}

void func(int* x) {
    *x = 10;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int sum, prod;

    int a = 5;
    func(&a);
    cout << a << endl;

    arrSumProd(arr, size, &sum, &prod);
    cout << "Sum = " << sum << ", Product = " << prod ;
    
    return 0;
}