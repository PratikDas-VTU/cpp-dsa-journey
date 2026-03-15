#include <iostream>
using namespace std;

int main() {

    // Declaring two integers
    int a = 10;
    int b = 3;

    // -----------------------------
    // Arithmetic Operators
    // -----------------------------

    // Addition
    cout << "Addition (a + b): " << a + b << endl;

    // Subtraction
    cout << "Subtraction (a - b): " << a - b << endl;

    // Multiplication
    cout << "Multiplication (a * b): " << a * b << endl;

    // Division (integer division)
    cout << "Division (a / b): " << a / b << endl;

    // Modulus (remainder)
    cout << "Modulus (a % b): " << a % b << endl;


    // -----------------------------
    // Increment and Decrement
    // -----------------------------

    int x = 5;

    // Pre-increment (++x)
    // Value increases first, then used
    cout << "Pre-increment (++x): " << ++x << endl;

    // Post-increment (x++)
    // Value used first, then increases
    cout << "Post-increment (x++): " << x++ << endl;

    cout << "Value of x after post-increment: " << x << endl;

    // Pre-decrement (--x)
    cout << "Pre-decrement (--x): " << --x << endl;

    // Post-decrement (x--)
    cout << "Post-decrement (x--): " << x-- << endl;

    cout << "Value of x after post-decrement: " << x << endl;


    // -----------------------------
    // Operator Precedence Example
    // -----------------------------

    // Multiplication happens before addition
    int result1 = 5 + 2 * 3;
    cout << "Result of 5 + 2 * 3: " << result1 << endl;

    // Parentheses change precedence
    int result2 = (5 + 2) * 3;
    cout << "Result of (5 + 2) * 3: " << result2 << endl;


    // Another precedence example
    int result3 = 10 - 4 / 2;
    cout << "Result of 10 - 4 / 2: " << result3 << endl;


    return 0;
}