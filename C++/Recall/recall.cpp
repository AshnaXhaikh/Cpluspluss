#include <iostream> // preprocessor directive to include the iostream library
using namespace std;

int main() {
    int n;
    cout << "Enter a number to check: ";
    cin >> n;
    bool isPrime = true;

    for (int i=2; (i*i) <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        cout << n << " is Prime";
    } else {
        cout << n << " is Non-Prime";
    }
    return 0;
}









// int main() {
//     int i = 1;
//     int n = 7;

//     do {
//         cout << i << " ";
//         i++;
        
//     } while (i<=n); {
//         // cout << i << " ";
//     }
//     // do {  // do-while loop m condition bad m check hoti h
//     //     cout << " Hello World! ";
//     // } while (3 > 5);

//     // // while (3>5) {
//     // //     cout << " Hello World! ";
//     // // }   // is m ek bar b print nh hoga 
//     //       // q k while loop m pehly condition check hoti hy
//     return 0;
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     bool isPrime = true;

//     for (int i=2; i <= n-1; i++) {
//         if (n % i == 0) {
//             isPrime = false;
//             break;
//         }
//     }
//     if (isPrime == true) {
//         cout << n << " is a prime number";
//     } else {
//         cout << n << " is not a prime number";
//     }
//     return 0;
// }



// int main() {


//     int n = 7;
//     int evenSum=0;

//     for (int i=1; i<=n; i++) {
//         if (i%2 == 0) {
//             evenSum += i;
//             cout << i << " + ";
//         }
//     }
//     cout << "evenSum: " << evenSum;
//     // int n = 10;
//     // int oddSum = 0;
    
//     // for (int i=1; i<=n; i++) {
//     //     if (i%2 != 0) {
//     //         oddSum += i;
//     //     }
//     // }
//     // cout << "odd sum (for loop) = " << oddSum << endl;


//     // int oddSum2=0;
//     // int i = 1;
//     // while (i <= n) {
//     //     if (i % 2 != 0) {
//     //         oddSum2 += i;
//     //     }
//     //     i++;
//     // }
//     // cout << "odd sum (while loop) = " << oddSum2 << endl;


//     return 0;
// }


















// int main() {
//     int i = 1;
//     int sum=0;
//     int n;

//     cout << "enter a number: ";
//     cin >> n;

//     while (i<=n) {
//         sum+=i;
//         i++;
    
//         // if (i == 8) { // ab ye 7 tk chale gas
//         //     break;
//         // }
//     }

//     cout << "\nfrom while loop" << endl;
//     cout << "Sum: " << sum << endl;

//     for (int i; i <= n; i++) {
//         sum+=i;
//         // if (i == 7) {
//         //     break;
//         // }
//     }

//     cout << "\nfrom for loop" << endl;
//     cout << "Sum: " << sum << endl;

//     return 0;
// }



// int main() {
//     // syntax of for loop for (initialization; condition; increment/decrement)
//     // int n = 20;
//     // int sum=0;
    
//     // sum of numbers from 1 to n
//     // for (int i=1; i<=n; i++) {
//     //     sum +=i;
//     // }
//     // cout << "Sum = " << sum << endl;

//     // while (n > 0) {
//     //     cout << n << " ";
//     //     n--;
//     // }


//     // print only even in for loop
//     // for (int i = 1; i <= n; i++) {
//     //     if (i % 2 == 0) {
//     //         cout << i << " ";
//     //     }
//     // }

//     // for (int i=1; i <= n; i+=2) {
//     //     cout << i << " ";
//     // }

//     // for (int i = 1; i <= 100; i++) {
//     //     cout << i << " ";
//     // }

//     return 0;
// }


// int main() {
//     int i = 1;
//     int n;

//     cout << "Enter a number: ";
//     cin >> n;

//     cout << "Counting from 1 to " << n << ":" << endl;

//     // using a while loop to count from 1 to n
//     while (i <= n) {
//         cout << i << " ";
//         i++;
//     }
//     cout << endl;
//     return 0;
// }



// int main() {
//     int n;
//     cout << "Enter a number: "; // prompt user for input
//     cin >> n;
    
//     // ternary operator: condition ? value_if_true : value_if_false
//     // ternary operator is a shorthand for if-else statements
//     cout << (n % 2 == 0? "The number is Even" : "The number is Odd") << endl;


//     return 0;
// }


// int main() {
//     char ch;
//     cout << "enter a character: ";
//     cin >> ch;

//     // here the implicit type conversion is used to convert the character to its ASCII value.
//     if ('a' <= ch && ch <= 'z') {
//         cout << ch << " is a lowercase letter." << endl;
//     } else {
//         cout << ch << " is an uppercase letter." << endl;
//        cout << "ASCII value of " << ch << " is " << int(ch) << endl; 
//     }
    
//     return 0;
// }